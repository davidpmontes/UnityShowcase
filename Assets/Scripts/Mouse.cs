using UnityEngine;

public class Mouse : IAimController
{
    public float Horizontal()
    {
        return Input.GetAxis("Mouse X");
    }

    public float Vertical()
    {
        return Input.GetAxis("Mouse Y");
    }
}
