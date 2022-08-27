using UnityEngine;

public class Save : MonoBehaviour {

    public static Save instance {get; private set;}

    const string HIGHSCORE_KEY = "Highscore";
    const string REMOVED_ADS_KEY = "Removed_Ads";
    const string TUTORIAL_SHOWN_KEY = "Tutorial_Shown";

    public int highscore {get; set;}
    public bool sound {get; set;}
    public bool removedAds {get; set;}
    public bool tutorialShown {get; set;}

    void Awake() {
        if (instance is not null && instance != this) {
            Destroy(gameObject);
        } else {
            instance = this;
        }

        DontDestroyOnLoad(gameObject);
        sound = true;
        tutorialShown = false;
    }

    void Start() => LoadData();

    public void SaveData() {
        PlayerPrefs.SetInt(HIGHSCORE_KEY, highscore);
        PlayerPrefs.SetInt(REMOVED_ADS_KEY, removedAds? 1 : 0);
        PlayerPrefs.SetInt(TUTORIAL_SHOWN_KEY, tutorialShown? 1 : 0);
        PlayerPrefs.Save();
    }
    
    public void LoadData() {
        if (PlayerPrefs.HasKey(HIGHSCORE_KEY)) 
            highscore = PlayerPrefs.GetInt(HIGHSCORE_KEY);
        if (PlayerPrefs.HasKey(REMOVED_ADS_KEY))
            removedAds = PlayerPrefs.GetInt(REMOVED_ADS_KEY) == 1;
        if (PlayerPrefs.HasKey(TUTORIAL_SHOWN_KEY))
            tutorialShown = PlayerPrefs.GetInt(TUTORIAL_SHOWN_KEY) == 1;
    }

    public void ResetData() {
        PlayerPrefs.DeleteKey(HIGHSCORE_KEY);
        highscore = 0;
    }

    public void ResetDataIncludingRemovedAds() => PlayerPrefs.DeleteAll();
}