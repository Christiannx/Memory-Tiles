using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class UIManager : MonoBehaviour {

    [SerializeField] RectTransform nextButton;
    [SerializeField] Heart[] hearts;
    [SerializeField] TextMeshProUGUI levelLabel;
    [SerializeField] TextMeshProUGUI timerLabel;
    [SerializeField] Animator darkPanel;
    [SerializeField] Animator hintWindow;
    [SerializeField] Button hintButton;
    [SerializeField] Animator pauseMenu;
    [SerializeField] TextMeshProUGUI pauseLevelLabel;
    [SerializeField] TextMeshProUGUI pauseHeartsLabel;
    [SerializeField] TextMeshProUGUI gameOverLevelLabel;
    [SerializeField] Animator gameOverMenu;
    [SerializeField] Button extraHeartsButtonGameOver;
    [SerializeField] Button extraHeartsButtonPause;

    GameManager gameManager;
    [HideInInspector] public bool timerPaused;
    float timeElapsed;
    bool canGetHint = true;

    void Awake() {
        gameManager = FindObjectOfType<GameManager>();
    }

    void ResetTimer() {
        timeElapsed = 0f;
    }

    void Update() {
        if (!timerPaused)
            timeElapsed += Time.deltaTime;

        var minutes = (int)(timeElapsed / 60);
        var seconds = (int)(timeElapsed % 60);
        var optionalZero = seconds < 10? "0" : "";
        timerLabel.text = minutes + ":" + optionalZero + seconds;
    }

    public void DecreaseHearts(int lives) {
        if (lives < 0) return;

        hearts[lives].Decrease();
        UpdatePauseHearts(lives);
    }

    public void IncreaseHearts(int lives) {
        if (lives > 3) return;

        hearts[lives - 1].Increase();
        UpdatePauseHearts(lives);
    }

    public void UpdatePauseHearts(int lives) => pauseHeartsLabel.text = lives + " lives left";

    public void NextLevel(int level) {
        nextButton.GetComponent<Animator>().ResetTrigger("Appear");
        nextButton.GetComponent<Animator>().SetTrigger("NextLevel");

        levelLabel.text = "Level " + level;
        pauseLevelLabel.text = "Level " + level;
        gameOverLevelLabel.text = "You reached level " + level;
    }

    public void FinishLevel() {
        nextButton.GetComponent<Animator>().ResetTrigger("NextLevel");
        nextButton.GetComponent<Animator>().SetTrigger("Appear");
        hintButton.interactable = false;
    }

    public void ShowHintWindow() => ShowMenu(hintWindow);
    public void ShowPauseMenu() => ShowMenu(pauseMenu);
    public void ShowGameOverMenu() => ShowMenu(gameOverMenu);

    public void HideHintWindow() => HideMenu(hintWindow);
    public void HidePauseMenu() => HideMenu(pauseMenu);
    public void HideGameOverMenu() => HideMenu(gameOverMenu);

    public void ShowMenu(Animator menu) {
        darkPanel.SetBool("Darker", true);
        menu.SetBool("Show", true);
        gameManager.Pause();
    }

    public void HideMenu(Animator menu) {
        darkPanel.SetBool("Darker", false);
        menu.SetBool("Show", false);
        Invoke(nameof(ResumeWrapper), 0.1f);
    }

    void ResumeWrapper() => gameManager.Resume();

    public void HintButtonInteractable(bool b) {
        if (canGetHint) {
            hintButton.interactable = b;
        }
    }

    public void Restart() {
        SceneManager.LoadScene("MainScene");
    }

    public void LoadScene(string name) {
        SceneManager.LoadScene(name);
    }

    public void DisableExtraHearts() {
        extraHeartsButtonGameOver.interactable = false;
        extraHeartsButtonPause.interactable = false;
    }

    public void DisableHints() {
        hintButton.interactable = false;
        canGetHint = false;
    }
}
