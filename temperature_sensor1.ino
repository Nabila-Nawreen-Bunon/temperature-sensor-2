// C++ code
//
int tempPin=A0;
void setup()
{
 Serial.begin(9600);
}

void loop()
{
  int temp=analogRead(tempPin);
  //Serial.println(temp);
  int Te=map(temp,20,358,-40,125);
  Serial.println(Te);
  
}