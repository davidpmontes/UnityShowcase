using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int speed;
    private Rigidbody rb;

    void Awake()
    {
        rb = gameObject.GetComponent<Rigidbody>();
    }

    public void Fire(Vector3 barrelForward)
    {
        rb.velocity = barrelForward * speed;
    }
}
