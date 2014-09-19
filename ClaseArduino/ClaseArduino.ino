void setup(){
pinMode(13,OUTPUT);
}
void loop() {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
}
//Metodo parpadeo
void parpadeo (int time) {
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(time);
}
  
*/
void suma(int value) {
  int suma=value+100;
  return suma;
}
  
  String instring ="" ; 
  void setup() {
  Serial.begin(9600);
  Serial.println("\n\nString toInt():");
  Serial.println();
  }
  void loop() {
  while (Serial.available() > 0) {
  int inChar = Serial.read();
  if (isDigit(inChar)) {
  inString += (char)inChar;
  }
  if (inChar == '\n') {
  Serial.print("Value:");
  Serial
  
**/

