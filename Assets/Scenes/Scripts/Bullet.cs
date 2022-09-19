using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Experimental.GlobalIllumination;

public class Bullet : MonoBehaviour
{
    // Start is called before the first frame update

    public float timeRemaining = 2;

    public float speed = 10.0f;


    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.position += Vector3.right * speed * Time.deltaTime;
        
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
     
                    other.gameObject.GetComponent<Light>().enabled = true;
                     other.gameObject.GetComponent<Light>().range+= 0.03f;

                     if(other.gameObject.GetComponent<Light>().range >= 133)
                     {
                        Debug.Log("You Win!");
                            Destroy(other.gameObject);
                     }


                    Debug.Log("Hit + "+other.name);
                    //gameObject.SetActive(false);
                    Destroy(gameObject);

        
        
    }

   
  


}
