using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraFollowBall : MonoBehaviour
{
    public Transform target;

    void Update()
    {
        Vector3 targetPostition = new Vector3(target.position.x, 3, target.position.z);
        transform.LookAt(targetPostition);
    }
}
