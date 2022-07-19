using UnityEngine;

public class SoundManager : MonoBehaviour {
    AudioSource click;

    void Awake() {
        click = GetComponent<AudioSource>();
    }

    public void Click() {
        if (!click.isPlaying) {
            click.Play();
        }
    }
}
