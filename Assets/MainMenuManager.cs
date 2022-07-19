using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenuManager : MonoBehaviour {

    [SerializeField] Animator canvas;

    public void Play() {
        canvas.Play("Play");
    }

    public void Quit() {
        Application.Quit();
    }

    public void WorkInProgress() {
        canvas.Play("WIP");
    }
}
