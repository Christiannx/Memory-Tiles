using UnityEngine;
using UnityEngine.UI;
using UnityEngine.Advertisements;

public abstract class RewardedAdsButton : MonoBehaviour, IUnityAdsLoadListener, IUnityAdsShowListener {

    [SerializeField] string androidAdUnitID = "Rewarded_Android";
    [SerializeField] string iOSAdUnitID = "Rewarded_iOS";

    [SerializeField] Button button;
    Save save;
    protected string adUnitID = "Rewarded_Android";
    bool _permanentlyDisabled = false;
    public bool permanentlyDisabled {
        get => _permanentlyDisabled;
        set {
            _permanentlyDisabled = value;
            button.interactable = !_permanentlyDisabled;
        }
    }

    void Awake() {
#if UNITY_ANDROID
        adUnitID = androidAdUnitID;
#elif UNITY_IOS
        adUnitID = iOSAdUnitUI;
#endif

        permanentlyDisabled = false;
        SetInteractable(false);
    }

    void Start() {
        save = FindObjectOfType<Save>();
        save.LoadData();

        if (!save.removedAds) {
            LoadAd();
        } else {
            button.onClick.AddListener(GrantReward);
        }
    }
 
    public void LoadAd() => Advertisement.Load(adUnitID, this);

    public void OnUnityAdsAdLoaded(string adUnityID) {
        if (adUnitID.Equals(this.adUnitID)) {
            button.onClick.RemoveListener(ShowAd);
            button.onClick.AddListener(ShowAd);
            SetInteractable(true);
        }
    }

    public void ShowAd() {
        SetInteractable(false);
        Advertisement.Show(adUnitID, this);
    }

    public void OnUnityAdsShowComplete(string adUnitID, UnityAdsShowCompletionState showCompletionState) {
        if (adUnitID.Equals(this.adUnitID) && showCompletionState.Equals(UnityAdsShowCompletionState.COMPLETED)) {
            GrantReward();
            Debug.Log("Grant Reward called");
            Advertisement.Load(adUnitID, this);
        }
    }

    public void OnUnityAdsFailedToLoad(string adUnitID, UnityAdsLoadError error, string message) {
        Debug.Log($"Error loading Ad Unit {adUnitID}: {error.ToString()} - {message}");
    }

    public void OnUnityAdsShowFailure(string adUnitId, UnityAdsShowError error, string message) {
        Debug.Log($"Error showing Ad Unit {adUnitId}: {error.ToString()} - {message}");
    }

    public void OnUnityAdsShowStart(string adUnitID) { }
    public void OnUnityAdsShowClick(string adUnitID) { }

    void OnDestroy() {
        button.onClick.RemoveListener(ShowAd);
    }

    public abstract void GrantReward();

    public virtual void SetInteractable(bool b) {
        if (permanentlyDisabled) return;
        button.interactable = b;
    }
}
