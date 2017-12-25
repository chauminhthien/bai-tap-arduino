int led8 = 8;
int led9 = 9;
int led10 = 10;
int led11 = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(led8, OUTPUT);
  pinMode(led9, OUTPUT);
  pinMode(led10, OUTPUT);
  pinMode(led11, OUTPUT);

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int i =  1;
  
  while(true){
    switch(i){
      case 1:
      {
        blink1();
        i ++;
        break;
      }
      case 2:
      {
        blink2();
        i ++;
        break;
      }
      case 3:
      {
        blink3();
        i ++;
        break;
      }
      case 4:
      {
        blink4();
        i ++;
        break;
      }
      default:
        i = 1;
    }
  }
}

void blink1 () {
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  delay(1000);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
  delay(1000);
  digitalWrite(led8, HIGH);
  digitalWrite(led9, HIGH);
  digitalWrite(led10, HIGH);
  digitalWrite(led11, HIGH);
  delay(1000);
  digitalWrite(led8, LOW);
  digitalWrite(led9, LOW);
  digitalWrite(led10, LOW);
  digitalWrite(led11, LOW);
}

void blink2 () {
  digitalWrite(led8, HIGH);
  delay(1000);
  digitalWrite(led9, HIGH);
  delay(1000);
  digitalWrite(led10, HIGH);
  delay(1000);
  digitalWrite(led11, HIGH);
  delay(1000);
  digitalWrite(led8, LOW);
  delay(1000);
  digitalWrite(led9, LOW);
  delay(1000);
  digitalWrite(led10, LOW);
  delay(1000);
  digitalWrite(led11, LOW);
  delay(1000);
}

void blink3 () {
  digitalWrite(led8, HIGH);
  digitalWrite(led10, HIGH);
  delay(1000);
  digitalWrite(led8, LOW);
  digitalWrite(led10, LOW);
  delay(1000);
  digitalWrite(led9, HIGH);
  digitalWrite(led11, HIGH);
  delay(1000);
  digitalWrite(led9, LOW);
  digitalWrite(led11, LOW);
  delay(1000);
}

void blink4 () {
 for(int i = 1; i < 5; i++){
  digitalWrite(led8, HIGH);
  delay(100);
  digitalWrite(led9, HIGH);
  delay(100);
  digitalWrite(led10, HIGH);
  delay(100);
  digitalWrite(led11, HIGH);
  delay(100);
  digitalWrite(led8, LOW);
  delay(100);
  digitalWrite(led9, LOW);
  delay(100);
  digitalWrite(led10, LOW);
  delay(100);
  digitalWrite(led11, LOW);
  delay(100);
 }
}
















