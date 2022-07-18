using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using static TileState;

public class GameManager : MonoBehaviour {

    [SerializeField] GameObject tilePrefab;
    [SerializeField] TileContainer container;
    [SerializeField] float previewDelay = 1f;
    [SerializeField] float finishAnimationDelay = 0.3f;

    UIManager ui;
    List<Tile> tilesTemp;
    List<Tile> tilesInSequence;
    bool inputEnabled = false;
    int currentIndexInSequence = 0;
    int lives = 3;
    int levelProgression = 1;
    int numberOfTiles;
    int numberOfSequencedTiles;


    void Awake() {
        ui = FindObjectOfType<UIManager>();
    }

    void Start() {
        Application.targetFrameRate = 120;
        Invoke(nameof(NextLevel), 0.1f);
    }

    void Update() {
        if (Input.GetMouseButtonDown(1)) {
            NextLevel();
        }

        if (Input.GetKeyDown(KeyCode.A)) {
            ClearLevel();
        }

        if (!inputEnabled) return;

        if (Input.touchCount > 0) {
            foreach (var touch in Input.touches) {
                if (touch.phase != TouchPhase.Began) continue;

                var touchPosition = Camera.main.ScreenToWorldPoint(touch.position);
                RaycastHit2D hit = Physics2D.Raycast(touchPosition, new Vector3(0, 0, 1));
                
                if (hit.collider is null) continue;
                if (hit.collider.GetComponent<Tile>() is null) continue;

                var tile = hit.collider.GetComponent<Tile>();
                EvaluateScore(tile);
            }
        }

        
#if UNITY_EDITOR
        if (Input.GetMouseButtonDown(0)) {
            var mousePosition = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            RaycastHit2D hit = Physics2D.Raycast(mousePosition, new Vector3(0, 0 , 1));

            if (hit.collider is null) return;
            if (hit.collider.GetComponent<Tile>() is null) return;

            var tile = hit.collider.GetComponent<Tile>();
            EvaluateScore(tile);
        }
#endif
    }

    public void NextLevel() {
        (numberOfTiles, numberOfSequencedTiles) = DifficultyConfig(levelProgression);

        ClearLevel();
        InitTiles(numberOfTiles);
        GenerateSequence(numberOfSequencedTiles);
    }

    void InitTiles(int amount) {
        var tilePositions = new List<Vector2>();

        for (int y = 1; y < (amount * 2); y += 2) {
            for (int x = 1; x < (amount * 2); x += 2) {
                float xf = x, yf = y, amountf = amount;

                var pos = new Vector2(xf / (2 * amountf), yf / (2 * amountf));
                tilePositions.Add(pos);
            }
        }

        float tileScale = container.width / amount - 0.1f;
        float offset = container.width / 2;

        tilesTemp = new List<Tile>();

        for (int i = 0; i < (Mathf.Pow(amount, 2)); i++) {
            var tile = Instantiate(
                tilePrefab, 
                tilePositions[i] * container.width + new Vector2(-offset, -offset),
                Quaternion.identity,
                container.transform
            );

            tile.transform.localScale = Vector2.one * tileScale;
            tilesTemp.Add(tile.GetComponent<Tile>());
        }

        int j = 0;
        for (int y = 1; y <= amount; y++) {
            for (int x = 1; x <= amount; x++) {
                tilesTemp[j].x = x;
                tilesTemp[j].y = y;
                j++;
            }
        }
    }

    void GenerateSequence(int length) {
        tilesInSequence = new List<Tile>();

        while (tilesTemp.Count > 0) {
            int index = Random.Range(0, tilesTemp.Count);
            tilesInSequence.Add(tilesTemp[index]);
            tilesTemp.RemoveAt(index);
        }

        for (int i = 0; i < tilesInSequence.Count; i++) {
            if (i < length)
                tilesInSequence[i].sequence = i;
            else
                tilesInSequence[i].sequence = -1;
        }
        

        StartCoroutine(PreviewSequence());
    }

    IEnumerator PreviewSequence() {
        inputEnabled = false;
        ui.HintButtonInteractable(false);

        foreach (var tile in tilesInSequence) {
            yield return new WaitForSeconds(previewDelay);

            if (tile.sequence != -1) {
                tile.Trigger(Preview);
            }
            else 
                break;
        }

        inputEnabled = true;
        ui.HintButtonInteractable(true);
    }

    void EvaluateScore(Tile tile) {
        if (tile.sequence == currentIndexInSequence) {
            tile.Trigger(Valid);
            currentIndexInSequence++;
        } else {
            tile.Trigger(Invalid);

            lives -= 1;
            ui.DecreaseHearts(lives);

            if (lives > 0) {
                ShowHint(currentIndexInSequence, 2);
            } else {
                inputEnabled = false;
            }
        }

        if (currentIndexInSequence == numberOfSequencedTiles) {
            levelProgression ++;
            inputEnabled = false;
            ui.FinishLevel();
            
            var tilesInOrder = GenerateFinishingSequence(tile);
            StartCoroutine(AnimateFinishingSequence(tilesInOrder));
        }
    }

    void ClearLevel() {
        currentIndexInSequence = 0;
        var allTiles = FindObjectsOfType<Tile>();
        for (int i = 0; i < allTiles.Length; i++) {
            Destroy(allTiles[i].gameObject);
        }
        ui.NextLevel(levelProgression);
    }

    public void ShowHint(int startIndex, int amount) {
        var range = Mathf.Min(startIndex + amount, Mathf.Pow(numberOfTiles, 2));
        for (int i = startIndex; i < range; i++) {
            if (tilesInSequence[i].sequence == -1) break;
            tilesInSequence[i].ShowHint(true);
        }
    }

    public void Pause() {
        inputEnabled = false;
        ui.timerPaused = true;
    }

    public void Resume() {
        inputEnabled = true;
        ui.timerPaused = false;
    }

    public void ShowHintButton() {
        ui.HideHintWindow();
        Invoke(nameof(ShowHintWrapper), 0.2f);

    }
    
    void ShowHintWrapper() => ShowHint(currentIndexInSequence, 2);
    
    static (int, int) DifficultyConfig(int level) {
        return level switch {
            1        => (2, 4),
            2        => (3, 4),
            3 or 4   => (3, 4),
            5 or 6   => (3, 5),
            7        => (4, 6),
            8 or 9   => (5, 4),
            10 or 11 => (5, 5),
            11 or 12 => (5, 6),
            13 or 14 => (6, 4),
            15 or 16 => (6, 5),
            17 or 18 => (6, 6),
            _        => (6, 7)
        };
    }

    List<List<Tile>> GenerateFinishingSequence(Tile startingTile) {
        var tilesInOrder = new List<List<Tile>>();
        int i = 0;

        tilesInOrder.Add(new List<Tile>());
        tilesInOrder[i].Add(startingTile);
        startingTile.finishAnimationPlayed = true;

        bool areTilesMissing = true;
        while (areTilesMissing) {
            
            tilesInOrder.Add(new List<Tile>());
            foreach (var tile in tilesInOrder[i]) {
                var position = tile.position;
                var adjacentPositions = Tile.GetAdjacentCoordinates(position, numberOfTiles);

                foreach (var adjacentPos in adjacentPositions) {
                    var newTile = Tile.GetTileAt(adjacentPos, tilesInSequence);
                    if (newTile.finishAnimationPlayed) continue;

                    newTile.finishAnimationPlayed = true;
                    tilesInOrder[i + 1].Add(newTile);
                }
            }

            areTilesMissing = false;
            foreach (var tile in tilesInSequence) {
                if (!tile.finishAnimationPlayed)  {
                    areTilesMissing = true;
                }
            }

            i ++;
            if (i > 100) break;
        }

        return tilesInOrder;
    }

    IEnumerator AnimateFinishingSequence(List<List<Tile>> tilesInOrder) {
        foreach (var iteration in tilesInOrder) {
            foreach (var tile in iteration) {
                tile.Trigger(Valid);
            }

            yield return new WaitForSeconds(finishAnimationDelay);
        }
    }
}