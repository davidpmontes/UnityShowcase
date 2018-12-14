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
    private InputController ic;
    private IAimController iac;

    void Start()
    {
        moveDirection = Vector3.zero;
        cc = GetComponent<CharacterController>();
        ic = new PCController();
        iac = new Mouse();
    }

    void Update()
    {
        UpdateMovement();
        UpdateAim();
    }

    private void UpdateAim()
    {
        transform.Rotate(0, iac.Horizontal() * aimHorizontalSpeed, 0);
    }

    private void UpdateMovement()
    {
        moveDirection.x = ic.Horizontal() * movementSpeed;
        moveDirection.z = ic.Vertical() * movementSpeed;
        moveDirection = transform.TransformDirection(moveDirection);

        if (cc.isGrounded)
        {
            moveDirection.y = 0;

            if (ic.Jump())
            {
                moveDirection.y = jumpSpeed;
            }
        }

        moveDirection.y = moveDirection.y - (gravity * Time.deltaTime);

        cc.Move(moveDirection * Time.deltaTime);
    }
}
