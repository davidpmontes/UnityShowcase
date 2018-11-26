using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class GameAI : MonoBehaviour
{
    public GameStateMachine StateMachine { get; set; }
    public Canvas canvas;

    private void Start()
    {
        StateMachine = new GameStateMachine(this.gameObject);
        StateMachine.Initialize();
    }

    private void Update()
    {
        StateMachine.Update();
    }
}
