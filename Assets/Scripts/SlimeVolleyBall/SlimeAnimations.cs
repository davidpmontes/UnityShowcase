using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SlimeAnimations : MonoBehaviour
{
    private Animator animator;

    void Start()
    {
        FindObjectOfType<SlimeMovement>().JumpEvent += OnJumpEvent;
        animator = GetComponent<Animator>();
    }

    void Update()
    {
        
    }

    private void OnJumpEvent()
    {
        animator.SetTrigger("jumping");
    }
}
