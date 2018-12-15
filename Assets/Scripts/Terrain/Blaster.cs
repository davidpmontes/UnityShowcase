using System.Collections.Generic;
using UnityEngine;

public class Blaster : MonoBehaviour, IWeapon
{
    public Transform bulletFireTransform;
    public BulletPool bulletPool;
    public int ammoCapacity;
    public float delayAmount;

    private float lastFiredTime;

    private void Start()
    {
    }

    public void FireFirst()
    {
        if (Time.time > lastFiredTime)
        {
            lastFiredTime = Time.time + delayAmount;
            bulletPool.GetBullet(bulletFireTransform);
        }
    }

    public void FireSecond()
    {
        Debug.Log("Blaster reload");
    }
}
