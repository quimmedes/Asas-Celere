using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    // Start is called before the first frame update
    public float speed = 10.0f;
    public GameObject bullet;

    public AudioSource machinegun;

    public bool isPlaying = false;


    void Start()
    {
        machinegun = GetComponent<AudioSource>();
        
    }

    // Update is called once per frame
    void Update()
    {

        
   
 
if (Input.GetKey("right")) {
   transform.position += Vector3.back * speed * Time.deltaTime;
       transform.SetPositionAndRotation(transform.position, Quaternion.Euler(45, 0, 0));

}
else

if(Input.GetKey("left")) {
    transform.position += Vector3.forward * speed * Time.deltaTime;

       transform.SetPositionAndRotation(transform.position, Quaternion.Euler(-45, 0, 0));
    }
   
else

if(Input.GetKey("up")) {
    transform.position+= Vector3.right * speed * Time.deltaTime;
           transform.SetPositionAndRotation(transform.position, Quaternion.Euler(0, 0, -10));

    }
    else

    if (Input.GetKey("down")) {
        transform.position+= Vector3.left * speed * Time.deltaTime;
               transform.SetPositionAndRotation(transform.position, Quaternion.Euler(0, 0, 60));

    }
    else
     
               transform.SetPositionAndRotation(transform.position, Quaternion.Euler(0, 0, 0));
   



    if(Input.GetKey("space")) {
        Instantiate(bullet, transform.position + Vector3.right * 3, transform.rotation);
        isPlaying = true;      
       
    }
    else{
        isPlaying = false;
    }
    

}

private void LateUpdate() {
    if(isPlaying){
        if(machinegun.isPlaying){
            return;
        }
        else{
            machinegun.Play();
        }
        
    }
    else{
        machinegun.Stop();
    }

}

private void OnTriggerEnter(Collider other) {

  if(other.gameObject.tag == "blocoup") {

    Debug.Log("colidiu");

     //transform.Translate(Vector3.left * 6 );
      transform.position += Vector3.left * 6;


  }

    if(other.gameObject.tag == "blocodown") {

    Debug.Log("colidiu");

     //transform.Translate(Vector3.left * 6 );
      transform.position += Vector3.right * 6;


  }
   if(other.gameObject.tag == "blocoleft") {

    Debug.Log("colidiu");

    // transform.Translate(Vector3.back * 6 );
           transform.position += Vector3.back * 6;



  }

   if(other.gameObject.tag == "blocoright") {

    Debug.Log("colidiu");

   //  transform.Translate(Vector3.forward * 6 );
           transform.position += Vector3.forward * 6;



  }

}







}
