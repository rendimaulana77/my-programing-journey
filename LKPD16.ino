//Rendi Maulana-XI TAV 3
const int buttonPin = 26;
const int buzzerPin = 27;
void setup(){
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT);}
void loop(){
  int buttonState = digitalRead(buttonPin);
  if(buttonState == HIGH){
    digitalWrite(buzzerPin, HIGH);
  }else{
   digitalWrite(buzzerPin, LOW);}}
