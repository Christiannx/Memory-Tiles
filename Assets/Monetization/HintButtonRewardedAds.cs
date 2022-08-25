using UnityEngine;
using UnityEngine.UI;

public class HintButtonRewardedAds : RewardedAdsButton {
    
    [SerializeField] Button hintButtonTileContainer;
    GameManager gameManager;

    void Awake() {
        gameManager = FindObjectOfType<GameManager>();
    }

    public override void GrantReward() {
        gameManager.HintRewarded();
    }

    public override void SetInteractable(bool b) {
        if (permanentlyDisabled) return;
        hintButtonTileContainer.interactable = b;
    }
}
