int buttonState = 0;


void setup() {
  pinMode(2, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);

  pinMode(3, INPUT);
 
}

void loop() {
  buttonState = digitalRead (3);
if (buttonState == HIGH) 
  {
   digitalWrite(2, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
}
  else
   {
    digitalWrite(2, LOW);
  digitalWrite(8, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
   }
}
