using UnityEngine;

public static class CrossPlatform {
    public static void ShowMessage(string message) {
        switch (Application.platform) {
            case RuntimePlatform.Android:
                Android.ShowAndroidToastMessage(message);
                break;
            default:
                Debug.Log(message);
                break;
        }
    }
}