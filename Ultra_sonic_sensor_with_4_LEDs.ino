const int trigPin=4;
const int echoPin=5;
long duration;
int distance;
void setup()
{
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  pinMode(16,OUTPUT);
  pinMode(17,OUTPUT);
  pinMode(21,OUTPUT);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  Serial.begin(115200);

}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin,LOW);
  duration=pulseIn(echoPin,HIGH);
  //calculate the distance
  distance=duration*0.032/2;
  Serial.print("Distance:");
  Serial.println(distance);
   if(distance>0&&distance<5)
   {
     digitalWrite(2,HIGH);
   }
   else
   {
    digitalWrite(2,LOW);
   }
   
   if(distance>6&&distance<10)
   {
      digitalWrite(16,HIGH);
   }
   else
   {
     digitalWrite(16,LOW); 
   }
   if(distance>11&&distance<15)
   {
      digitalWrite(17,HIGH);
   } 
   else
   {
     digitalWrite(17,LOW);
    
    }
   if(distance>16&&distance<20)
   {
      digitalWrite(21,HIGH);
   }
   else
   {
    digitalWrite(21,LOW);      
   }
}


  
  
