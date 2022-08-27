using System;
using System.Collections;

using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using UnityEngine.Purchasing;

using TMPro;

public class MainMenuManager : MonoBehaviour {

    [SerializeField] Animator canvas;
    [SerializeField] Animator darken;
    [SerializeField] Animator settingsPage;
    [SerializeField] Animator confirmationPage;
    [SerializeField] TextMeshProUGUI highscoreLabel;
    [SerializeField] Toggle soundToggle;
    [SerializeField] AudioClip[] playAudios;
    [SerializeField] Button removeAdsButton;

    AudioSource click;
    Save save;
    [HideInInspector] public bool playAnimationDone;

    void Awake() {
        Application.targetFrameRate = 120;
        click = GetComponent<AudioSource>();
        playAnimationDone = false;
    }

    void Start() {
        save = FindObjectOfType<Save>();

        save.LoadData();
        if (save.highscore != 0) {
            highscoreLabel.text = "level " + save.highscore;
        } else {
            highscoreLabel.text = "level -";
        }

        soundToggle.isOn = save.sound;

        if (save.removedAds)
            DisableRemoveAdsButton();
    }

    public void Play() {
        canvas.Play("Play", -1, 0);

        DisableAllButtons();
        StartCoroutine(PlaySound());
        StartCoroutine(LoadSceneAsync());
    }

    IEnumerator PlaySound() {
        if (!save.sound) yield break;
        foreach (var clip in playAudios) {
            click.PlayOneShot(clip);
            yield return new WaitForSeconds(0.07f);
        }
    }

    public void Quit() {
        Application.Quit();
    }

    public void WorkInProgress() {
        CrossPlatform.ShowMessage("Work in progress...");
        PlayClick();
    }

    public void ShowSettings() => Show(settingsPage);
    public void ShowConfirmation() {confirmationPage.SetBool("Show", true); PlayClick();}
    public void HideSettings() => Hide(settingsPage);
    public void HideConfirmation() {confirmationPage.SetBool("Show", false); PlayClick();}

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
        save.ResetData(); 
        highscoreLabel.text = "level - ";
        HideConfirmation();
        HideSettings();
    }

    public void PlayClick() {
        if (!save.sound) return;
        click.Play();
    }

    public void SwitchHasSound() {
        save.sound = soundToggle.isOn;
    }

    public void DisableAllButtons() {
        var buttons = FindObjectsOfType<Button>();
        Array.ForEach(buttons, button => button.interactable = false);
    }

    IEnumerator LoadSceneAsync() {
        yield return null;
    
        AsyncOperation asyncLoad = SceneManager.LoadSceneAsync("MainScene");
        asyncLoad.allowSceneActivation = false;
        while (!asyncLoad.isDone) {
            if (playAnimationDone) {
                asyncLoad.allowSceneActivation = true;
            }

            yield return null;
        }
    }

    public void DisableRemoveAdsButton() {
        removeAdsButton.onClick.AddListener(() => {
            CrossPlatform.ShowMessage("You already purchased this");
        });
        Destroy(removeAdsButton.GetComponent<IAPButton>(), 0.1f);
    }
}