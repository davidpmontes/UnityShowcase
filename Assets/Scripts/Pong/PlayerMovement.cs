using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerMovement : MonoBehaviour, IMove
{
    private Rigidbody rb;
    public float speed;

    public void moveDown()
    {
        rb.MovePosition(transform.position + -transform.up * speed * Time.deltaTime);
    }

    public void moveUp()
    {
        rb.MovePosition(transform.position + transform.up * speed * Time.deltaTime);
    }

    void Start ()
    {
        rb = GetComponent<Rigidbody>();
    }

    void Update ()
    {
		
	}
}
