using UnityEngine;

public class MouseController : IAim, IAimAction
{
    public bool Action1()
    {
        return Input.GetMouseButton(0);
    }

    public bool Action2()
    {
        return Input.GetMouseButton(1);
    }

    public float Horizontal()
    {
        return Input.GetAxis("Mouse X");
    }

    public float Vertical()
    {
        return Input.GetAxis("Mouse Y");
    }
}
