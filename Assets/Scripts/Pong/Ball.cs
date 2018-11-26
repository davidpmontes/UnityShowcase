using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Ball : MonoBehaviour
{
    public float constantspeed;
    private Rigidbody rb;

	void Start ()
    {
        rb = GetComponent<Rigidbody>();
        rb.velocity = new Vector3(constantspeed, 0);
	}
	
	void Update ()
    {
        rb.velocity = constantspeed * (rb.velocity.normalized);
    }
}
