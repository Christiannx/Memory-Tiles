using UnityEngine;
using TMPro;

public class AdsManager : MonoBehaviour {

    [SerializeField] TextMeshProUGUI hintbutton;

    Save save;

    void Awake() {
        save = FindObjectOfType<Save>();
    }

    void Start() {
        if (save.removedAds) {
            hintbutton.text = "Free";
        }
    }
}
