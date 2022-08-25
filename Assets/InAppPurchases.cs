using UnityEngine;
using UnityEngine.Purchasing;

public class InAppPurchases : MonoBehaviour {

    const string removedAds = "com.christianrupp.memorytiles.removeads";

    [SerializeField] MainMenuManager ui;
    Save save;

    void Awake() => save = FindObjectOfType<Save>();

    public void OnPurchaseComplete(Product product) {
        if (product.definition.id == removedAds) {
            save.LoadData();
            save.removedAds = true;
            save.SaveData();

            ui.DisableRemoveAdsButton();
        }
    }

    public void OnPurchaseFailed(Product product, PurchaseFailureReason reason) {
        Debug.Log("Purchase failed");
    }
}
