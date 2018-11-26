using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInputKeyboard : MonoBehaviour
{
    public IMove p1;
    public IMove p2;

    void Start()
    {
        p1 = GameObject.Find("player1").GetComponent<IMove>();
        p2 = GameObject.Find("player2").GetComponent<IMove>();

    }

    void Update()
    {

        if (Input.GetKey("q"))
        {
            p1.moveUp();
        }
        else if (Input.GetKey("a"))
        {
            p1.moveDown();
        }
        else if (Input.GetKey("o"))
        {
            p2.moveUp();
        }
        else if (Input.GetKey("l"))
        {
            p2.moveDown();
        }

    }
}
