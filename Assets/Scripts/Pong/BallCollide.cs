using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallCollide : MonoBehaviour
{
    private Rigidbody rb;

    private void OnCollisionEnter(Collision collision)
    {
        var diff = transform.position.y - collision.gameObject.transform.position.y;

        if (collision.gameObject.name == "player1")
        {
            rb.velocity = new Vector3(1, diff, 0).normalized * rb.velocity.magnitude;
        }
        if (collision.gameObject.name == "player2")
        {
            rb.velocity = new Vector3(-1, diff, 0).normalized * rb.velocity.magnitude;
        }
    }

    // Use this for initialization
    void Start () {
        rb = GetComponent<Rigidbody>();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
