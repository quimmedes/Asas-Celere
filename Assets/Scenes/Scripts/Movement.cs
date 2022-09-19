using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
      Transform t;
       public float forca = 20f;
    // Start is called before the first frame update
    void Start()
    {
        t = GetComponent<Transform>();
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.right*forca*Time.deltaTime);
    }
}
