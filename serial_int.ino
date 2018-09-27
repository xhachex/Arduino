#define DEBUG(a) Serial.println(a);
 
void setup()
{
   Serial.begin(9600);
   Serial.setTimeout(50);
}
 
void loop()
{
   if (Serial.available())
   {
      int data = Serial.parseInt();
      DEBUG((int)data);
   }
}
