using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInputTouch : MonoBehaviour
{
    public IMove p1;
    public IMove p2;

    /* |---------------|
     * |2             4|
     * |               |
     * |               |
     * |1             3|
     * |---------------|
     */

    Rect rect1 = new Rect(0, 0, Screen.width * 0.1f, Screen.width * 0.1f);
    Rect rect2 = new Rect(0, Screen.height - Screen.width * 0.1f, Screen.width * 0.1f, Screen.height);
    Rect rect3 = new Rect(Screen.width - Screen.width * 0.1f, 0, Screen.width, Screen.width * 0.1f);
    Rect rect4 = new Rect(Screen.width - Screen.width * 0.1f,
                          Screen.height - Screen.width * 0.1f,
                          Screen.width,
                          Screen.height);


    void Start()
    {
        p1 = GameObject.Find("player1").GetComponent<IMove>();
        p2 = GameObject.Find("player2").GetComponent<IMove>();

    }

    void Update()
    {
        foreach (var touch in Input.touches)
        {
            if (rect1.Contains(touch.position))
            {
                p1.moveDown();
            }
            else if (rect2.Contains(touch.position))
            {
                p1.moveUp();
            }
            else if (rect3.Contains(touch.position))
            {
                p2.moveDown();
            }
            else if (rect4.Contains(touch.position))
            {
                p2.moveUp();
            }
        }
    }
}
