using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
      Rigidbody rigidbody;
      Transform t;
       public float forca = 20f;
    // Start is called before the first frame update
    void Start()
    {
        rigidbody = GetComponent<Rigidbody>();
        t = GetComponent<Transform>();
        
    }

    // Update is called once per frame
    void Update()
    {
        //rigidbody.AddForce(forca,0,0, ForceMode.Impulse);
        transform.Translate(Vector3.right*forca*Time.deltaTime);
    }
}
