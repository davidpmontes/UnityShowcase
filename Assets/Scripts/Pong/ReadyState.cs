using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ReadyState : StateMachineBehaviour
{
    GameObject manager;
    CanvasController cc;
    GameController gc;

	 // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
	override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        manager = animator.gameObject;
        cc = manager.GetComponent<CanvasController>();
        gc = manager.GetComponent<GameController>();

        gc.GameObjectsDeactivate();

        cc.readyStatePanel.SetActive(true);
        cc.startButton.SetActive(true);
        cc.countdownLabel.SetActive(false);
	}

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
	override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
	}

	// OnStateExit is called when a transition ends and the state machine finishes evaluating this state
	override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        cc.startButton.SetActive(false);
        cc.countdownLabel.SetActive(true);
    }
}
