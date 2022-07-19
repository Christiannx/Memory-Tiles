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

    GameManager gameManager;
    [HideInInspector] public bool timerPaused;
    float timeElapsed;

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
    }

    public void FinishLevel() {
        nextButton.GetComponent<Animator>().ResetTrigger("NextLevel");
        nextButton.GetComponent<Animator>().SetTrigger("Appear");
        hintButton.interactable = false;
    }

    public void ShowHintWindow() {
        darkPanel.SetBool("Darker", true);
        hintWindow.SetBool("Show", true);
        gameManager.Pause();
    }
    
    public void HideHintWindow() {
        darkPanel.SetBool("Darker", false);
        hintWindow.SetBool("Show", false);
        Invoke(nameof(ResumeWrapper), 0.1f);
    }

    void ResumeWrapper() => gameManager.Resume();

    public void HintButtonInteractable(bool b) {
        hintButton.interactable = b;
    }

    public void ShowPauseMenu() {
        darkPanel.SetBool("Darker", true);
        pauseMenu.SetBool("Show", true);
        gameManager.Pause();
    }

    public void HidePauseMenu() {
        darkPanel.SetBool("Darker", false);
        pauseMenu.SetBool("Show", false);
        Invoke(nameof(ResumeWrapper), 0.1f);
    }

    public void Restart() {
        SceneManager.LoadScene(0);
    }
}
