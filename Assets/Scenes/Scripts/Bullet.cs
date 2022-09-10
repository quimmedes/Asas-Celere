using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.GlobalIllumination;

public class Bullet : MonoBehaviour
{
    // Start is called before the first frame update

    public float timeRemaining = 2;

    public float speed = 10.0f;

    public Light light;

    public GameObject gameObject;
    void Start()
    {
        light = gameObject.GetComponent<Light>();
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Translate(Vector3.right * speed * Time.deltaTime);
        
        if(timeRemaining > 0)
        {
            timeRemaining -= Time.deltaTime;
        }
        else
        {
            Destroy(gameObject);
        }
        
    }

    private void OnTriggerEnter(Collider other) {
     
        //    if(gameObject.tag == "boss")
        //    {
               light.enabled = true;
                           Debug.Log("boss hit");

        //    }
            Destroy(gameObject);
        
    }


}
