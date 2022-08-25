using UnityEngine;

public class TileContainer : MonoBehaviour {
    
    [SerializeField] GameObject cornerPrefab;
    GameObject[] corners;

    public float width {
        get; private set;
    }

    void Awake() {
        corners = new GameObject[2];
    }

    void Start() {
        float scale = GetComponentInChildren<SpriteRenderer>().transform.localScale.x - 0.05f;
        corners[0] = Instantiate(
            cornerPrefab,
            new Vector2(-(scale / 2), scale / 2),
            Quaternion.identity,
            transform
        );
        corners[1] = Instantiate(
            cornerPrefab,
            new Vector2(scale / 2, scale / 2),
            Quaternion.identity,
            transform
        );

        corners[0].name = "Corners (0)";
        corners[1].name = "Corners (1)";

        width = Vector2.Distance(corners[0].transform.position, corners[1].transform.position);
    }
}
