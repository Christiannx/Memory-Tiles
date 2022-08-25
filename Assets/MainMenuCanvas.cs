using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuCanvas : MonoBehaviour {
    public void LoadAsync() {
        SceneManager.LoadSceneAsync("MainScene");
    }

    public void UnloadAsync() {
        FindObjectOfType<MainMenuManager>().playAnimationDone = true;
    }
}
