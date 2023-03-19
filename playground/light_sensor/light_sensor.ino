int LIGHT_SENSOR_PIN=A3;
int redPin=4;
int yellowPin=8;
int greenPin=12;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(LIGHT_SENSOR_PIN, INPUT);
	Serial.begin(9600);
}

void loop() {
  program();
  // senseLight();
  // off();
}

void printLightSensor() {
	int luminosity = analogRead(LIGHT_SENSOR_PIN); // 0 .. 1023
  Serial.println(luminosity);
  delay(500);
}

void program() {
	int luminosity = analogRead(LIGHT_SENSOR_PIN); // 0 .. 1023
  Serial.println(luminosity);

  if (luminosity < 1023/3) {
    digitalWrite(redPin, HIGH);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, LOW);
  } else if (luminosity < 1023 * 2 / 3) {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, HIGH);
    digitalWrite(greenPin, LOW);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(yellowPin, LOW);
    digitalWrite(greenPin, HIGH);
  }
  
  delay(500);
}

void off() {
  digitalWrite(yellowPin, LOW);
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
}