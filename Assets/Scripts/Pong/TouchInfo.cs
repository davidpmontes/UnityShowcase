using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TouchInfo : MonoBehaviour, ITouchUpdate

{
    public Text text1;
    public Text text2;
    public Text text3;

    public void Touches()
    {
        text1.text = Input.touchCount.ToString();
        text2.text = "";
        int i = 0;
        foreach(var touch in Input.touches)
        {
            text2.text += i++ + ": " + touch.position.x + ", " + touch.position.y + "\n" ;
        }
    }

    void Start ()
    {
		
	}
	
	void Update ()
    {
        if (Input.touchCount > 0)
            Touches();
	}
}
