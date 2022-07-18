using UnityEngine;

public class Heart : MonoBehaviour {

    [SerializeField] Sprite fullHeart;
    [SerializeField] Sprite emptyHeart;

    public void Decrease() {
        GetComponent<SpriteRenderer>().sprite = emptyHeart;
    }

    public void Increase() {
        GetComponent<SpriteRenderer>().sprite = fullHeart;
    }
}
