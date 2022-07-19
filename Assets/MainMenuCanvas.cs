using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuCanvas : MonoBehaviour {
    public void Load() {
        SceneManager.LoadScene("MainScene");
    }
}
