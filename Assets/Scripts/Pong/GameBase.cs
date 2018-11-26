using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameBase : StateMachineBehaviour
{
    protected GameObject manager;
    protected CanvasController cc;
    protected GameController gc;

    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        manager = animator.gameObject;
        cc = manager.GetComponent<CanvasController>();
        gc = manager.GetComponent<GameController>();
    }
}
