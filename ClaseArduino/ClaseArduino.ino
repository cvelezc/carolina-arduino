void setup(){
pinMode(13,OUTPUT);
}
void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}

void parpadeo (int time) {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(time);
}
  

void suma(int value) {
  int suma=value+100;
  return suma;
}
  


