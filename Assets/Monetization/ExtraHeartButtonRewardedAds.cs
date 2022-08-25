public class ExtraHeartButtonRewardedAds : RewardedAdsButton {

    GameManager gameManager;

    void Awake() => gameManager = FindObjectOfType<GameManager>();

    public override void GrantReward() => gameManager.GetExtraHeart();
}