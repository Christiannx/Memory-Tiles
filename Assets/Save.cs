using UnityEngine;

public class Save : MonoBehaviour {

    const string HIGHSCORE_KEY = "Highscore";

    public int highscore {get; set;}

    void Awake() => DontDestroyOnLoad(gameObject);

    public void SaveData() => PlayerPrefs.SetInt(HIGHSCORE_KEY, highscore);
    
    public void LoadData() {
        if (PlayerPrefs.HasKey(HIGHSCORE_KEY)) 
            highscore = PlayerPrefs.GetInt(HIGHSCORE_KEY);
    }

    public void ResetData() => PlayerPrefs.DeleteAll();
}