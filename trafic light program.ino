    #include<stdio.h>
    const int led=13;
    const int led2=12;
    const int led3=11;

    void setup() {
      pinMode(led,OUTPUT);
      pinMode(led2,OUTPUT);
      pinMode(led3,OUTPUT);

    }

void loop() {
  
  digitalWrite(led,HIGH);
  delay(2000);
  digitalWrite(led,LOW);
  
  digitalWrite(led2,HIGH);
  delay(1000);
  digitalWrite(led2,LOW);
  
  digitalWrite(led3,HIGH);
  delay(2000);
  digitalWrite(led3,LOW);
  
}