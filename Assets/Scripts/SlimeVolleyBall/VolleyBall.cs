using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VolleyBall : MonoBehaviour
{
    public float maxSpeed;
    private Rigidbody rb;

    void Start()
    {
        FindObjectOfType<SlimeMovement>().ResetEvent += OnResetEvent;
        rb = GetComponent<Rigidbody>();
    }

    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.name == "SlimeBallCollide")
        {
            rb.AddForce(collision.gameObject.GetComponentInParent<CharacterController>().velocity * 5);
        }
    }

    void FixedUpdate()
    {
        if (rb.velocity.magnitude > maxSpeed)
        {
            rb.velocity = rb.velocity.normalized * maxSpeed;
        }
    }

    private void OnResetEvent()
    {
        transform.position = new Vector3(-6.43f, 8.25f, 0f);
        rb.velocity = Vector3.zero;
    }
}
