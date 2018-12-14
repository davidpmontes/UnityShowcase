using UnityEngine;

public class Blaster : IWeapon
{
    public void First()
    {
        Debug.Log("Blaster fire");
    }

    public void Second()
    {
        Debug.Log("Blaster reload");
    }
}
