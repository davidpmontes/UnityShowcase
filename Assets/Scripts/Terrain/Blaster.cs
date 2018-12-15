using System.Collections.Generic;
using UnityEngine;

public class Blaster : MonoBehaviour, IWeapon
{
    public GameObject bulletPrefab;
    public Transform bulletFireTransform;
    public int ammoCapacity;
    public float delayAmount;

    private GameObject[] bulletList;
    private int currBullet;
    private float lastFiredTime;


    private void Start()
    {
        currBullet = 0;

        bulletList = new GameObject[ammoCapacity];
        for (int i = 0; i < ammoCapacity; i++)
        {
            bulletList[i] = Instantiate(bulletPrefab);
            bulletList[i].SetActive(false);
        }
    }

    public void FireFirst()
    {
        if (currBullet < ammoCapacity)
        {
            if (Time.time > lastFiredTime)
            {
                lastFiredTime = Time.time + delayAmount;
                bulletList[currBullet].transform.position = bulletFireTransform.position;
                bulletList[currBullet].GetComponent<Bullet>().Fire(bulletFireTransform.forward);
                bulletList[currBullet].SetActive(true);
                currBullet++;
            }
        }

        currBullet %= ammoCapacity;
    }

    public void FireSecond()
    {
        Debug.Log("Blaster reload");
    }
}
