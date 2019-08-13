// SerialPrint : is read text from arduino sent to my computer

int led1 = 3;
int val = 1;
void setup()

{
  pinMode(led1,OUTPUT); // determine led 3 is output
  Serial.begin(9600); // senting ratio data is 9600
  Serial.println("My Arduino");
  
}

void loop()
{
  digitalWrite(led1, HIGH);
  Serial.print(val); // Arduino sent value in variable form 'val'
  Serial.print(" NO ");
  Serial.println("LED");
  delay(2000);
  digitalWrite(led1,LOW);
  Serial.print(" OFF ");
  Serial.println("LED");
  delay(2000);
}
