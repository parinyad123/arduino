int led1 = 2;
int led2 = 3;

void setup()

  {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW);
  
  }

  void loop()
  {
    digitalWrite(led1,HIGH);
    delay(100);
    digitalWrite(led1,LOW);
    delay(100);
    digitalWrite(led2,HIGH);
    delay(100);
    digitalWrite(led2,LOW);
    delay(100);
  }
