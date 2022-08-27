using UnityEngine;
using TMPro;
using System.Collections.Generic;

public class Tile : MonoBehaviour {

    static int tileColor = 1;

    int _sequence;
    public int sequence {
        get => _sequence; 
        set {
            indexLabel.text = (value + 1).ToString();
            _sequence = value;
        }
    }

    public int x;
    public int y;
    public (int, int) position {
        get => (x, y);
        set {
            x = value.Item1;
            y = value.Item2;
        }
    }

    public bool finishAnimationPlayed = false;

    [SerializeField] TextMeshProUGUI indexLabel;
    [SerializeField] Animator indexAnimator;
    Animator animator;
    SoundManager sound;

    void Awake() {
        animator = GetComponent<Animator>();
        sound = FindObjectOfType<SoundManager>();
    }

    public void Trigger(TileState state) {
        if (state == TileState.Valid) {
            if (Random.Range(0, 2) == 0) {
                tileColor--;
                if (tileColor <= 0) {
                    tileColor = 4;
                }
            } else {
                tileColor++;
                if (tileColor > 4) {
                    tileColor = 1;
                }
            }

            animator.Play("Valid " + tileColor, -1, 0);
            return;
        }
        
        animator.Play(state.ToString(), -1, 0);
    }

    public void ShowHint(bool fade) {
        if (fade) {
            indexAnimator.Play("Hint", -1, 0);
        } else {
            indexAnimator.Play("Reveal", -1, 0);
        }
    }

    public void DestroyWithAnimation() {
        animator.Play("End", -1, 0);
        Destroy(this.gameObject, 1f);
    }

    public void DestroyImmediately() {
        Destroy(this.gameObject); 
    }
    
    public static List<(int, int)> GetAdjacentCoordinates((int, int) position, int gridSize) 
        => GetAdjacentCoordinates(position.Item1, position.Item2, gridSize);

    public static List<(int, int)> GetAdjacentCoordinates(int x, int y, int gridSize) {
        var coordsTemp = new List<(int, int)>();
        coordsTemp.Add((x + 1, y));
        coordsTemp.Add((x - 1, y));
        coordsTemp.Add((x,     y + 1));
        coordsTemp.Add((x,     y - 1));
        
        var coords = new List<(int, int)>();
        foreach (var pos in coordsTemp) {
            (int xx, int yy) = pos;
            if (xx > gridSize || yy > gridSize || xx < 1 || yy < 1)
                continue;
            coords.Add(pos);
        }

        return coords;
    }

    public static Tile GetTileAt((int, int) position, List<Tile> tiles) {
        foreach (var tile in tiles) {
            if (tile.position == position) {
                return tile;
            }
        }

        return null;
    }
}

public enum TileState {
    Idle,
    Preview,
    Valid,
    Invalid,
}
