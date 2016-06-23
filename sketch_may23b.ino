#define LFM 11
#define LBM 4
#define RBM 5
#define RFM 10

#define LFM2 6
#define LBM2 9
#define RBM2 5
#define RFM2 10

void setup() {
  // put your setup code here, to run once:
#if 1
  pinMode(LFM, OUTPUT);   // sets cthe pin as output
  pinMode(LBM, OUTPUT);   // sets the pin as output
  pinMode(RBM, OUTPUT);   // sets the pin as output
  pinMode(RFM, OUTPUT);   // sets the pin as output
  pinMode(LFM2, OUTPUT);   // sets cthe pin as output
  pinMode(LBM2, OUTPUT);   // sets the pin as output
  pinMode(RBM2, OUTPUT);   // sets the pin as output
  pinMode(RFM2, OUTPUT);   // sets the pin as output
#else
  pinMode (10, OUTPUT);
  pinMode (8, OUTPUT);
  pinMode (7, OUTPUT);
#endif

}

void loop() {
  // put your main code here, to run repeatedly:
#if 1
  digitalWrite(LFM, LOW);
  digitalWrite(LBM, HIGH);
  digitalWrite(RBM, LOW);
  digitalWrite(RFM, HIGH);

  digitalWrite(LFM2, LOW);
  digitalWrite(LBM2, HIGH);
  digitalWrite(RBM2, LOW);
  digitalWrite(RFM2, HIGH);
  delay(10000);
  digitalWrite(LFM, HIGH);
  digitalWrite(LBM, LOW);
  digitalWrite(RBM, HIGH);
  digitalWrite(RFM, LOW);

  digitalWrite(LFM2, HIGH);
  digitalWrite(LBM2, LOW);
  digitalWrite(RBM2, HIGH);
  digitalWrite(RFM2, LOW);
  delay(10000);
#else
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);

  // use the enable line with PWM to control the speed
  analogWrite(10, 255);
#endif
}
