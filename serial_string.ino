#define DEBUG(a, b) for (int index = 0; index < b; index++) Serial.print(a[index]); Serial.println();
 
void setup()
{
   Serial.begin(9600);
   Serial.setTimeout(50);
}
 
void loop()
{
   if (Serial.available())
   {
      char data[20];
      size_t count = Serial.readBytesUntil('\n', data, 20);
      DEBUG(data, count)
   }
}

#define DEBUG(a) Serial.println(a);
 
void setup()
{
   Serial.begin(9600);
}
 
void loop()
{
 
   if (Serial.available() > 0)
   {
      String str = Serial.readStringUntil('\n');
      int data = str.toInt();
      DEBUG(data);
   }
}
