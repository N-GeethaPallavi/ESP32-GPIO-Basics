#define pushbutton 13
#define LED 2
void setup() 
{
  Serial.begin(115200);
pinMode(LED,OUTPUT);
pinMOde(pushbutton,INPUT);
}
void loop() 
{
  if (digitalRead(pushbutton)==HIGH)
{
digitalWrite(LED,HIGH);
Serial.println("Pressed");
}
else
{
digitalWrite(LED,LOW);
}
}
