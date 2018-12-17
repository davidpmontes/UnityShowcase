using System;
using UnityEngine;

public class SlimeMovement : MonoBehaviour
{
    public float _movementSpeed = 6.0f;
    public float _jumpSpeed = 8.0f;
    public float _gravity = 20.0f;

    private Vector3 moveDirection;
    private CharacterController cc;
    private SlimeVolleyBall.KeyboardController controller;
    private bool isJumping;

    public event Action JumpEvent;
    public event Action ResetEvent;

    void Start()
    {
        moveDirection = Vector3.zero;
        cc = GetComponent<CharacterController>();
        controller = GetComponent<SlimeVolleyBall.KeyboardController>();
    }

    void Update()
    {
        UpdateMovement();
        CheckReset();
    }

    private void CheckReset()
    {
        if (controller.Reset())
        {
            ResetEvent();
        }
    }

    private void UpdateMovement()
    {
        moveDirection.x = controller.Horizontal() * _movementSpeed;
        moveDirection = transform.TransformDirection(moveDirection);

        if (cc.isGrounded)
        {
            moveDirection.y = 0;

            if (controller.Jump())
            {
                moveDirection.y = _jumpSpeed;

                if (JumpEvent != null) JumpEvent();
            }
        }

        moveDirection.y = moveDirection.y - (_gravity * Time.deltaTime);

        cc.Move(moveDirection * Time.deltaTime);
    }
}
