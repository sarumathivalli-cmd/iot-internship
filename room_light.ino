#define PIR 6
#define LED 12
#define IR 9
void setup() {
  Serial.begin(115200);
  pinMode(PIR,INPUT);
  pinMode(IR,INPUT);
  pinMode(LED,OUTPUT);
}
void loop() {
  int l=digitalRead(PIR);
  int t=digitalRead(IR);
  Serial.println("MOTION");
  Serial.println(l);
  if(l==0 && t==1)
  {
  digitalWrite(LED,LOW);
  }
  else
  {
  digitalWrite(LED,HIGH);
  }
  delay(5000);
}
