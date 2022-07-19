using UnityEngine;
using TMPro;

public class MainMenuManager : MonoBehaviour {

    [SerializeField] Animator canvas;
    [SerializeField] Animator darken;
    [SerializeField] Animator settingsPage;
    [SerializeField] Animator confirmationPage;
    [SerializeField] TextMeshProUGUI highscoreLabel;

    AudioSource click;

    void Awake() {
        click = GetComponent<AudioSource>();
    }

    void Start() {
        var save = FindObjectOfType<Save>();

        save.LoadData();
        if (save.highscore != 0) {
            highscoreLabel.text = "level " + save.highscore;
        } else {
            highscoreLabel.text = "level -";
        }
    }

    public void Play() {
        canvas.Play("Play", -1, 0);
    }

    public void Quit() {
        Application.Quit();
    }

    public void WorkInProgress() {
        canvas.Play("WIP", -1, 0);
        PlayClick();
    }

    public void ShowSettings() => Show(settingsPage);
    public void ShowConfirmation() {confirmationPage.SetBool("Show", true); click.Play();}
    public void HideSettings() => Hide(settingsPage);
    public void HideConfirmation() {confirmationPage.SetBool("Show", false); click.Play();}

    public void Show(Animator window) {
        darken.SetBool("Darker", true);
        window.SetBool("Show", true);
        PlayClick();
    }

    public void Hide(Animator window) {
        darken.SetBool("Darker", false);
        window.SetBool("Show", false);
        PlayClick();
    }

    public void Reset() {
        FindObjectOfType<Save>().ResetData();
        highscoreLabel.text = "level - ";
        HideConfirmation();
        HideSettings();
    }

    public void PlayClick() {
        if (!click.isPlaying && FindObjectOfType<Save>().sound) {
            click.Play();
        }
    }

    public void SwitchHasSound() {
        var save = FindObjectOfType<Save>();
        save.sound = !save.sound;
    }
}
