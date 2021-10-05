using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float speed = 7;
    public float smoothMoveTime = 0.1f;
    public float TurnSpeed = 8;

    public event System.Action OnReachedCheckpoint;

    public Transform CheckPoint;

    float CurrAngle;
    float smoothInputMag;
    float smoothVel;
    Vector3 Velocity;

    bool disabled;

    new Rigidbody rigidbody;

    private void Start()
    {
        Guard.OnPlayerSpotted += Disable;
        rigidbody = GetComponent<Rigidbody>();
    }


    void Update()
    {
        Vector3 movDir = Vector3.zero;
        if(!disabled)
        {
            movDir = new Vector3(Input.GetAxisRaw("Horizontal"), 0, Input.GetAxisRaw("Vertical")).normalized;
        }
        float inputMag = movDir.magnitude;
        smoothInputMag = Mathf.SmoothDamp(smoothInputMag, inputMag, ref smoothVel, smoothMoveTime);
        Velocity = transform.forward * speed * smoothInputMag;
        
        float angle = Mathf.Atan2(movDir.x, movDir.z)*Mathf.Rad2Deg;
        CurrAngle = Mathf.LerpAngle(CurrAngle, angle, TurnSpeed * Time.deltaTime*inputMag);

    }

    void Disable()
    {
        disabled = true;
    }

    private void FixedUpdate()
    {
        rigidbody.MoveRotation(Quaternion.Euler(Vector3.up * CurrAngle));
        rigidbody.MovePosition(rigidbody.position + Velocity * Time.deltaTime);

        if((CheckPoint.localScale * 5).x >=Mathf.Abs((CheckPoint.position - rigidbody.position).x) && (CheckPoint.localScale * 5).z >= Mathf.Abs((CheckPoint.position - rigidbody.position).z))
        {
            Disable();
            if(OnReachedCheckpoint != null)
            {
                OnReachedCheckpoint();
            }
        }

    }
    private void OnDestroy()
    {
        Guard.OnPlayerSpotted -= Disable;
    }
}
