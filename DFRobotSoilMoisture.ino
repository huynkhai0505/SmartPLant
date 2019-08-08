  /*
  # Editor     : Tan Khai Huynh
  # Date       : 08/08/2019
  # Version    : 1.0
  # Connect the sensor to the A0(Analog 0) pin on the Arduino board
  # the sensor value description
  # 0  ~300     dry soil
  # 300~700     humid soil
  # 700~950     in water
  */
void setup() {
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  int val;
  val = analogRead(0);
  if (val <= 300){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  
  Serial.println(val); //print the value to serial port
  delay(1000);
}
