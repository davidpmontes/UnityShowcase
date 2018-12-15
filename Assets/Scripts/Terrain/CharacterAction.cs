using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterAction : MonoBehaviour
{
    private IAction action;
    private IAimAction aimAction;
    private CharacterInventory inventory;

    public GameObject blaster;

    void Start()
    {
        action = new KeyboardController();
        aimAction = new MouseController();
        inventory = new CharacterInventory();
        inventory.Slot1 = blaster.GetComponent<Blaster>();
    }

    void Update()
    {
        UpdateAction();
        UpdateAimAction();
    }

    private void UpdateAimAction()
    {
        if (aimAction.Action1())
        {
            if (inventory.Slot1 != null)
            {
                inventory.Slot1.FireFirst();
            }
        }
    }

    private void UpdateAction()
    {

    }
}
