using UnityEngine;

public class MouseController : IAim, IAimAction
{
    public bool AimAction1()
    {
        return Input.GetMouseButton(1);
    }

    public bool AimAction2()
    {
        return Input.GetMouseButton(2);
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
