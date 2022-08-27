using System;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class UIManager : MonoBehaviour {

    [SerializeField] RectTransform nextButton;
    [SerializeField] Heart[] hearts;
    [SerializeField] TextMeshProUGUI levelLabel;
    [SerializeField] TextMeshProUGUI hintsLabel;
    [SerializeField] Animator darkPanel;
    [SerializeField] Animator hintWindow;
    [SerializeField] HintButtonRewardedAds hintButtonRewardedAds;
    [SerializeField] Animator pauseMenu;
    [SerializeField] TextMeshProUGUI pauseLevelLabel;
    [SerializeField] TextMeshProUGUI pauseHeartsLabel;
    [SerializeField] TextMeshProUGUI gameOverLevelLabel;
    [SerializeField] Animator gameOverMenu;
    [SerializeField] ExtraHeartButtonRewardedAds extraHeartsButtonGameOver;
    [SerializeField] ExtraHeartButtonRewardedAds extraHeartsButtonPause;
    [SerializeField] TextMeshProUGUI tutorialLabel;
    [SerializeField] Image highscoreImage;

    GameManager gameManager;
    Save save;
    bool canGetHint = true;

    void Awake() {
        gameManager = FindObjectOfType<GameManager>();
        save = FindObjectOfType<Save>();
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

        levelLabel.text = "Level " + level + " ";
        pauseLevelLabel.text = "Level " + level;
        gameOverLevelLabel.text = "You reached level " + level;

        highscoreImage.gameObject.SetActive(save.highscore <= level && save.highscore != 0);

        Canvas.ForceUpdateCanvases();
        LayoutRebuilder.ForceRebuildLayoutImmediate((RectTransform) highscoreImage.transform.parent);
        LayoutRebuilder.MarkLayoutForRebuild((RectTransform) highscoreImage.transform.parent);
    }

    public void FinishLevel() {
        nextButton.GetComponent<Animator>().ResetTrigger("NextLevel");
        nextButton.GetComponent<Animator>().SetTrigger("Appear");
        hintButtonRewardedAds.SetInteractable(false);
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
            hintButtonRewardedAds.SetInteractable(b);
        }
    }

    public void Restart() {
        SceneManager.LoadScene("MainScene");
    }

    public void LoadScene(string name) {
        SceneManager.LoadScene(name);
    }

    public void DisableExtraHearts() {
        extraHeartsButtonGameOver.permanentlyDisabled = true;
        extraHeartsButtonPause.permanentlyDisabled = true;
    }

    public void DisableHints() {
        hintButtonRewardedAds.permanentlyDisabled = true;
        canGetHint = false;
    }

    public void UpdateHints(int amount) {
        if (amount > 3) return;
        hintsLabel.text = amount + "/3 hints";
    }

    public void DontDestroy(GameObject parent) {
        GameObject[] objectsToDestroy = GameObject.FindGameObjectsWithTag("DestroyOnLoad");
        Array.ForEach(objectsToDestroy, elem => Destroy(elem.gameObject));
 
        DontDestroyOnLoad(parent);
        Destroy(parent, 1);
        HidePauseMenu();
        HideGameOverMenu();
    }

    public void ShowTutorialText(string message) {
        tutorialLabel.text = message;
        tutorialLabel.GetComponent<Animator>().Play("Tutorial Text Appear");
    }
}
