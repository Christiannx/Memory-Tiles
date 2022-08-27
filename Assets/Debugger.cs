using UnityEngine;

public class Debugger : MonoBehaviour {
    static string myLog = "";
    private string output;
    private string stack;

    void Awake() {
        DontDestroyOnLoad(gameObject);
    }

    void OnEnable() {
        Application.logMessageReceived += Log;
    }

    void OnDisable() {
        Application.logMessageReceived -= Log;
    }

    public void Log(string logString, string stackTrace, LogType type) {
        output = logString;
        stack = stackTrace;
        myLog = output + "\n" + myLog;
        if (myLog.Length > 5000) {
            myLog = myLog.Substring(0, 4000);
        }
    }

    void OnGUI() {
        //if (!Application.isEditor)
            myLog = GUI.TextArea(new Rect(10, 10, Screen.width - 10, 100), myLog);
    }
}