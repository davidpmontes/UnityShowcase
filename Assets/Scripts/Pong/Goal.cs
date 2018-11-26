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
            manager.GetComponent<Animator>().SetTrigger("BallOut");
        }
    }

}
