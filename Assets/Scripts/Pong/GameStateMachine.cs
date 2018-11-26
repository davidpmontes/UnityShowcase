using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameStateMachine
{
    public IState currentState { get; private set; }
    public IState readystate;
    public IState countdownstate;
    public IState playstate;
    public IState pointstate;

    public GameObject Owner;

    public GameStateMachine(GameObject o)
    {
        Owner = o;

        readystate = new ReadyState(this);
        countdownstate = new CountDownState(this);
        playstate = new PlayState(this);
        pointstate = new PointState(this);

        currentState = readystate;
    }

    public void ChangeState(IState newState)
    {
        if (currentState != null)
            currentState.ExitState(Owner);

        currentState = newState;
        currentState.EnterState(Owner);
    }

    public void Initialize()
    {
        if (currentState != null)
            currentState.EnterState(Owner);
    }


    public void Update()
    {
        if (currentState != null)
            currentState.UpdateState(Owner);
    }
}
