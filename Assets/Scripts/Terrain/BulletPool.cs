using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletPool : MonoBehaviour
{
    public GameObject bulletPrefab;
    public int maxBulletCount;

    private GameObject[] bulletList;
    private int currBullet = 0;

    public void Start ()
    {
        bulletList = new GameObject[maxBulletCount];
        for (int i = 0; i < maxBulletCount; i++)
        {
            bulletList[i] = Instantiate(bulletPrefab);
            bulletList[i].SetActive(false);
        }
    }

    public void GetBullet(Transform t)
    {
        currBullet++;
        currBullet %= maxBulletCount;
        bulletList[currBullet].GetComponent<Bullet>().Fire(t);
        bulletList[currBullet].SetActive(true);
    }
}
