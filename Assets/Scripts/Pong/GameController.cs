using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour
{
    public GameObject p1;
    public GameObject p2;
    public GameObject ball;

    public void GameObjectsDeactivate()
    {
        p1.SetActive(false);
        p2.SetActive(false);
        ball.SetActive(false);
    }

    public void GameObjectsActivate()
    {
        p1.transform.position = new Vector3(-7, 0, 0);
        p2.transform.position = new Vector3(7, 0, 0);
        ball.transform.position = new Vector3(-5, 0, 0);
        ball.GetComponent<Ball>().Init();

        p1.SetActive(true);
        p2.SetActive(true);
        ball.SetActive(true);
    }

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
