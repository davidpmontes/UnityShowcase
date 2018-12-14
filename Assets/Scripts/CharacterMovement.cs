using UnityEngine;

public class CharacterMovement : MonoBehaviour
{
    public float aimHorizontalSpeed = 2.0f;
    public float aimVerticalSpeed = 2.0f;
    public float movementSpeed = 6.0f;
    public float jumpSpeed = 8.0f;
    public float gravity = 20.0f;

    private Vector3 moveDirection;
    private CharacterController cc;
    private IMovement movement;
    private IAim aim;
    private IAction action;
    private IAimAction aimAction;

    void Start()
    {
        moveDirection = Vector3.zero;
        cc = GetComponent<CharacterController>();
        movement = new KeyboardController();
        aim = new MouseController();
        action = new KeyboardController();
        aimAction = new MouseController();
    }

    void Update()
    {
        UpdateMovement();
        UpdateAim();
        UpdateAction();
        UpdateAimAction();
    }

    private void UpdateAimAction()
    {

    }

    private void UpdateAction()
    {

    }

    private void UpdateAim()
    {
        transform.Rotate(0, aim.Horizontal() * aimHorizontalSpeed, 0);
    }

    private void UpdateMovement()
    {
        moveDirection.x = movement.Horizontal() * movementSpeed;
        moveDirection.z = movement.Vertical() * movementSpeed;
        moveDirection = transform.TransformDirection(moveDirection);

        if (cc.isGrounded)
        {
            moveDirection.y = 0;

            if (movement.Jump())
            {
                moveDirection.y = jumpSpeed;
            }
        }

        moveDirection.y = moveDirection.y - (gravity * Time.deltaTime);

        cc.Move(moveDirection * Time.deltaTime);
    }
}
