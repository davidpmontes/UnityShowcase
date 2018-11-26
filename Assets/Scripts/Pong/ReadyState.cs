using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ReadyState : IState
{
    private readonly GameStateMachine stateMachine;
    private readonly GameAI ai;
    private bool isStart;
    public GameObject panel;

    public ReadyState(GameStateMachine sm)
    {
        stateMachine = sm;
        ai = sm.Owner.GetComponent<GameAI>();
    }

    public void EnterState(GameObject owner)
    {
        panel = ai.canvas.transform.Find("ReadyStatePanel").gameObject;
        isStart = false;
        panel.SetActive(true);
    }

    public void ExitState(GameObject owner)
    {

    }

    public void UpdateState(GameObject owner)
    {
        if (isStart){
            stateMachine.ChangeState(stateMachine.countdownstate);
        }
    }

    public void StartButton()
    {
        isStart = true;
    }
}