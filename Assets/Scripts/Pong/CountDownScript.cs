using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CountDownScript : GameBase
{
    private float countdown;

    // OnStateEnter is called when a transition starts and the state machine starts to evaluate this state
    override public void OnStateEnter(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        base.OnStateEnter(animator, stateInfo, layerIndex);

        countdown = 3.0f;
   	}

	// OnStateUpdate is called on each Update frame between OnStateEnter and OnStateExit callbacks
	override public void OnStateUpdate(Animator animator, AnimatorStateInfo stateInfo, int layerIndex)
    {
        countdown -= Time.deltaTime;
        if (countdown > 0.0f)
            cc.countdownLabel.GetComponent<Text>().text = Mathf.Ceil(countdown).ToString();
        else
            animator.SetTrigger("Countdown");
    }

    // OnStateExit is called when a transition ends and the state machine finishes evaluating this state
    override public void OnStateExit(Animator animator, AnimatorStateInfo stateInfo, int layerIndex) {
        animator.ResetTrigger("Countdown");
        cc.countdownLabel.GetComponent<Text>().text = "";
        cc.readyStatePanel.SetActive(false);

        gc.GameObjectsActivate();
    }
}
