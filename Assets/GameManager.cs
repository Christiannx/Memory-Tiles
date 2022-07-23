using System.Collections;
using System.Collections.Generic;
using UnityEngine;

using static TileState;

public class GameManager : MonoBehaviour {

    [SerializeField] GameObject tilePrefab;
    [SerializeField] TileContainer container;
    [SerializeField] float previewDelay = 1f;
    [SerializeField] float finishAnimationDelay = 0.3f;
    [SerializeField] float tileEndDelay = 0.3f;

    UIManager ui;
    Save save;
    SoundManager sound;
    List<Tile> tilesTemp;
    List<Tile> tilesInSequence;
    bool inputEnabled = false;
    int currentIndexInSequence = 0;
    int lives = 3;
    int extraLivesCounter = 0;
    int hintCounter = 0;
    int levelProgression = 1;
    int numberOfTiles;
    int numberOfSequencedTiles;


    void Awake() {
        ui = FindObjectOfType<UIManager>();
        save = FindObjectOfType<Save>();
        sound = FindObjectOfType<SoundManager>();
    }

    void Start() {
        Invoke(nameof(NextLevel), 0.1f);
    }

    void Update() {
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

    public void NextLevel() => StartCoroutine(NextLevelCoroutine());

    IEnumerator NextLevelCoroutine() {
        (numberOfTiles, numberOfSequencedTiles) = DifficultyConfig(levelProgression);

        ClearLevel();
        if (levelProgression > 1)
            yield return new WaitForSeconds(tileEndDelay);
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

        float tileScale = container.width / amount - 0.05f;
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
                if (tile.sequence == numberOfSequencedTiles - 1)
                    sound.Preview(false);
                else
                    sound.Preview(true);
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

            if (currentIndexInSequence != numberOfSequencedTiles)
                sound.Valid(tile.sequence, numberOfTiles);
        } else {
            tile.Trigger(Invalid);

            lives -= 1;
            ui.DecreaseHearts(lives);

            if (lives > 0) {
                ShowHint(currentIndexInSequence, 2);
            } else {
                inputEnabled = false;
                ShowHint(currentIndexInSequence, 2);
                Invoke(nameof(GameOverMenuWrapper), 0.5f);
                
                save.LoadData();
                var highscore = save.highscore;
                if (levelProgression > highscore) {
                    save.highscore = levelProgression;
                    save.SaveData();
                }
            }
        }

        if (currentIndexInSequence == numberOfSequencedTiles) {
            levelProgression ++;
            inputEnabled = false;

            ui.FinishLevel();
            sound.FinishSound(numberOfSequencedTiles - 1);

            var tilesInOrder = GenerateFinishingSequence(tile);
            StartCoroutine(AnimateFinishingSequence(tilesInOrder));
        }
    }

    void GameOverMenuWrapper() => ui.ShowGameOverMenu();

    void ClearLevel() {
        currentIndexInSequence = 0;
        var allTiles = FindObjectsOfType<Tile>();
        for (int i = 0; i < allTiles.Length; i++) {
            allTiles[i].DestroyWithAnimation();
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
    }

    public void Resume() {
        inputEnabled = true;
    }

    public void HintRewarded() {
        ui.HideHintWindow();
        hintCounter ++;
        ui.UpdateHints(hintCounter);

        if (hintCounter < 3) {
            Invoke(nameof(ShowHintWrapper), 0.2f);
        } else if (hintCounter >= 3 ) {
            Invoke(nameof(ShowHintWrapper), 0.2f);
            ui.DisableHints();
        }
    }
    
    void ShowHintWrapper() => ShowHint(currentIndexInSequence, 2);
    
    static (int, int) DifficultyConfig(int level) {
        return level switch {
            1        => (2, 4),
            2 or 3   => (3, 4),
            4 or 5   => (3, 5),
            6 or 7   => (3, 6),
            8 or 9   => (4, 4),
            10 or 11 => (4, 5),
            11 or 12 => (4, 6),
            13 or 14 => (5, 4),
            15 or 16 => (5, 5),
            17 or 18 => (5, 6),
            19 or 20 => (6, 4),
            21 or 22 => (6, 5),
            _        => (6, 6)
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
                    if (tilesInOrder[i + 1].Contains(newTile)) continue;

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

    public void GetExtraHeart() {
        if (lives >= 3) {
            if (Application.platform == RuntimePlatform.Android)
                _ShowAndroidToastMessage("You already have 3 lives");
            return;
        }

        lives ++;
        extraLivesCounter ++;
        if (extraLivesCounter >= 3) {
            ui.DisableExtraHearts();
        }


        ui.IncreaseHearts(lives);
        ui.HidePauseMenu();
        ui.HideGameOverMenu();
        ShowHint(currentIndexInSequence, 2);
    }

    private void _ShowAndroidToastMessage(string message) {
        AndroidJavaClass unityPlayer = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
        AndroidJavaObject unityActivity = unityPlayer.GetStatic<AndroidJavaObject>("currentActivity");

        if (unityActivity != null) {
            AndroidJavaClass toastClass = new AndroidJavaClass("android.widget.Toast");
            unityActivity.Call("runOnUiThread", new AndroidJavaRunnable(() => {
                AndroidJavaObject toastObject = toastClass.CallStatic<AndroidJavaObject>("makeText", unityActivity, message, 0);
                toastObject.Call("show");
            }));
        }
    }
}