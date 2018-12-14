using UnityEngine;

public class PCController : InputController
{
    public float Horizontal()
    {
        return Input.GetAxis("Horizontal");
    }

    public float Vertical()
    {
        return Input.GetAxis("Vertical");
    }

    public bool Jump()
    {
        return Input.GetButton("Jump");
    }

}
