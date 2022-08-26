using UnityEngine;
using TMPro;

public class AdsManager : MonoBehaviour {

    [SerializeField] TextMeshProUGUI hintbuttonLabel;

    Save save;

    void Awake() {
        save = FindObjectOfType<Save>();
    }

    void Start() {
        if (save.removedAds) {
            hintbuttonLabel.text = "Free";
        }
    }
}
