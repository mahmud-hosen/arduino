int led13=13;
 int led12=12;
  int led11=11;
   int led10=10;
    int led9=9;
     int led8=8;
      int led7=7;
       int led6=6;
        int led5=5;
         int led4=4;
          int led3=3;
           int led2=2;
          

void setup()
{
 pinMode(led13, OUTPUT);
  pinMode(led12, OUTPUT);   
   pinMode(led11, OUTPUT);
    pinMode(led10, OUTPUT);
     pinMode(led9, OUTPUT);
      pinMode(led8, OUTPUT);
       pinMode(led7, OUTPUT);
        pinMode(led6, OUTPUT);
         pinMode(led5, OUTPUT);
          pinMode(led4, OUTPUT);
           pinMode(led3, OUTPUT);           
   

} 

void loop() {
  digitalWrite(led13, HIGH);
  delay(100);
  digitalWrite(led13, LOW);
  delay(100);
  
  digitalWrite(led12, HIGH);
   delay(100);
    digitalWrite(led12, LOW);
     delay(100);
  
  digitalWrite(led11, HIGH);
    delay(100);
     digitalWrite(led11, LOW);
      delay(100);
  
  digitalWrite(led10, HIGH);
   delay(100);
    digitalWrite(led10, LOW);
     delay(100);

  digitalWrite(led9, HIGH);
    delay(100);
     digitalWrite(led9, LOW);
      delay(100);

  digitalWrite(led7, HIGH);
   delay(100);
    digitalWrite(led7, LOW);
     delay(100);

  digitalWrite(led6, HIGH);
   delay(100);
    digitalWrite(led6, LOW);
     delay(100);

  digitalWrite(led5, HIGH);
   delay(100);
    digitalWrite(led5, LOW);
     delay(100);

  digitalWrite(led4, HIGH);
    delay(100);
     digitalWrite(led4, LOW);
      delay(100);

  digitalWrite(led3, HIGH);
   delay(1000);
    digitalWrite(led3, LOW);
     delay(1000);

  digitalWrite(led2, HIGH);
   delay(10);
    digitalWrite(led2, LOW);
     delay(10);

  
  
}
