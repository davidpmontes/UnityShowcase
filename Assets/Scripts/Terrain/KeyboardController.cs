using UnityEngine;

public class KeyboardController : IMovement, IAction
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

    public bool Button1()
    {
        return Input.GetKey("z");
    }

    public bool Button2()
    {
        return Input.GetKey("x");
    }

    public bool Button3()
    {
        return Input.GetKey("c");
    }

    public bool Button4()
    {
        return Input.GetKey("v");
    }
}
