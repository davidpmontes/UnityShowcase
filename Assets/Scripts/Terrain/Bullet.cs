using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int speed;
    public float lifespan;

    private float deathTime;
    private Rigidbody rb;

    void Awake()
    {
        rb = gameObject.GetComponent<Rigidbody>();
    }

    private void Update()
    {
        if (Time.time > deathTime)
        {
            gameObject.SetActive(false);
        }
    }

    public void Fire(Transform t)
    {
        deathTime = Time.time + lifespan;
        transform.position = t.position;
        rb.velocity = t.forward * speed;
    }
}
