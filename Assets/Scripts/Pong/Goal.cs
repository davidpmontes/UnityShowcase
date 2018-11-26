using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Goal : MonoBehaviour
{
    public GameObject manager;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "ball")
        {
            if (gameObject.name == "westGoal")
                manager.GetComponent<GameController>().P2score++;
            else if (gameObject.name == "eastGoal")
                manager.GetComponent<GameController>().P1score++;


            manager.GetComponent<Animator>().SetTrigger("BallOut");
        }
    }

}
