using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class SoundManager : MonoBehaviour {

    [SerializeField] float finishSoundDelay = 0.3f;
    [SerializeField] AudioClip click;
    [SerializeField] AudioClip[] validAudioClips;
    [SerializeField] AudioClip[] previewClips;

    AudioSource audioSource;
    Save save;

    void Awake() {
        audioSource = GetComponent<AudioSource>();
        save = FindObjectOfType<Save>();
        
    }

    public void Click() {
        if (!save.sound) return;
        audioSource.PlayOneShot(click);
    }

    public void Preview(bool lastOne) {
        if (!save.sound) return;
        audioSource.PlayOneShot(previewClips[lastOne? 0 : 1], 0.7f);
    }

    public void Valid(int index, int numberOfTiles) {
        if (!save.sound) return;

        var clipsInOrder = GetAudioClipsInOrder(numberOfTiles - 1);
        audioSource.PlayOneShot(clipsInOrder[index]);
    }

    public void FinishSound(int lastIndex) => StartCoroutine(FinishSoundCoroutine(lastIndex));

    IEnumerator FinishSoundCoroutine(int lastIndex) {
        if (!save.sound) yield break;
        
        var clipsInOrder = GetAudioClipsInOrder(lastIndex);
        for (int i = 0; i <= lastIndex; i++) {
            audioSource.PlayOneShot(clipsInOrder[i]);
            yield return new WaitForSeconds(finishSoundDelay);
        }
    }

    List<AudioClip> GetAudioClipsInOrder(int lastIndex) {
        var clipsInOrder = new List<AudioClip>(validAudioClips);

        if (lastIndex <= 4)
            return clipsInOrder;
        else if (lastIndex == 5) {
            clipsInOrder[4] = validAudioClips[5];
            clipsInOrder[5] = validAudioClips[4];
        }

        return clipsInOrder;
    }
}
