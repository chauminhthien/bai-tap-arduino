int quangTro = A5; // khai báo chan quang trở
int led = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // khởi tạo cổng serial, toc do 9600
  pinMode(led, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int giaTriQuanTro = analogRead(quangTro);
  delay(1000);
  Serial.println(giaTriQuanTro);

  if(giaTriQuanTro > 500){
    digitalWrite(led, LOW);
  }else{
    digitalWrite(led, HIGH);
  }
}
