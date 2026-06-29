# define LED 2 
# define pushbutton 13 
void setup()  
{ 
  Serial.begin(115200); 
  pinMode(LED,OUTPUT); 
  pinMode(pushbutton,INPUT_PULLUP); 
} 
void loop()  
{ 
  //Not pressed == High  
  //Pressed == Low 
  if(digitalRead(pushbutton) == LOW) 
  { 
  digitalWrite(LED,HIGH); 
  Serial.println("Pressed"); 
  } 
  else { 
    digitalWrite(LED,LOW); 
  } 
}
