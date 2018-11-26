using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PointState : IState
{
    private readonly GameStateMachine stateMachine;
    private readonly GameAI ai;

    public PointState(GameStateMachine sm)
    {
        stateMachine = sm;
        ai = sm.Owner.GetComponent<GameAI>();
    }

    public void EnterState(GameObject owner)
    {
    }

    public void ExitState(GameObject owner)
    {
    }

    public void UpdateState(GameObject owner)
    {

    }
}