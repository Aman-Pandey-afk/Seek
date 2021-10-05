using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Guard : MonoBehaviour
{
    public static event System.Action OnPlayerSpotted;

    public Transform PathHolder;
    public float speed = 5;
    public float delay = 0.5f;
    public LayerMask ViewMask;

    public Light spotlight;
    public float ViewDistance;
    float ViewAngle;

    public Transform PlayerPosition;

    Color OriginalColor;

    private void Start()
    {
        ViewAngle = spotlight.spotAngle;
        OriginalColor = spotlight.color;

        Vector3[] waypoints = new Vector3[PathHolder.childCount];
        for (int i = 0; i < waypoints.Length; i++)
        {
            waypoints[i] = PathHolder.GetChild(i).position;
            waypoints[i].y = transform.position.y;

        }
        StartCoroutine(FollowPath(waypoints));
    }

    private void Update()
    {
        if (PlayerIsVisible())
        {
            spotlight.color = Color.red;
            if(OnPlayerSpotted != null)
            {
                OnPlayerSpotted();
            }
        }
        else spotlight.color = OriginalColor;
    }

        bool PlayerIsVisible()
        {
        Vector3 dir = PlayerPosition.position - transform.position;
        float ValidAngle = Vector3.Angle(transform.forward, dir);

        if (!Physics.Linecast(transform.position,PlayerPosition.position,ViewMask))
        {
            if (dir.magnitude <= ViewDistance && Mathf.Abs(ValidAngle) <= ViewAngle / 2)
            return true; 

         }
        return false;
    }

    IEnumerator FollowPath(Vector3[] wayPoint)
    {
        transform.position = wayPoint[0];
        int targetWaypointIndex = 1;
        Vector3 targetWaypoint = wayPoint[targetWaypointIndex];
        transform.LookAt(targetWaypoint);
        while (true)
        {
            transform.position = Vector3.MoveTowards(transform.position, targetWaypoint, speed * Time.deltaTime);
            if (transform.position == targetWaypoint)
            {
                targetWaypointIndex = (targetWaypointIndex + 1) % wayPoint.Length;
                targetWaypoint = wayPoint[targetWaypointIndex];
                yield return new WaitForSeconds(delay);
                yield return StartCoroutine(TurnToFace(targetWaypoint));
            }
            yield return null;
        }

    }

    IEnumerator TurnToFace(Vector3 LookTarget)
    {
        Vector3 targetDir = (LookTarget - transform.position).normalized;
        float targetAngle = 90 - Mathf.Atan2(targetDir.z, targetDir.x) * Mathf.Rad2Deg;
        while (Mathf.Abs(Mathf.DeltaAngle(transform.eulerAngles.y, targetAngle)) > 0.05f)
        {
            float angle = Mathf.MoveTowardsAngle(transform.eulerAngles.y, targetAngle, 90f * Time.deltaTime);
            transform.eulerAngles = Vector3.up * angle;
            yield return null;
        }
    }



    private void OnDrawGizmos()
    {
        Vector3 startPosition = PathHolder.GetChild(0).position;
        Vector3 previousPosition = startPosition;
        foreach (Transform waypoint in PathHolder)
        {
            Gizmos.DrawSphere(waypoint.position, 0.3f);
            Gizmos.DrawLine(previousPosition, waypoint.position);
            previousPosition = waypoint.position;

        }
        Gizmos.DrawLine(previousPosition, startPosition);
    }
}
