// pin delcarations
const int left = 11;
const int right = 10;
const int forward = 9;
const int backward = 6;
char key;

int standardValue = 0.6 * 255;
// what this is going to do is spoof the signal
void setup() {
  Serial.begin(9600);
  pinMode(left, OUTPUT);
  pinMode(right, OUTPUT);
  pinMode(forward, OUTPUT);
  pinMode(backward, OUTPUT);

  //displaying the keyboard mappings
	Serial.println("Welcome to Straight Flash!");
	Serial.println("Place the vehicle on a straight surface away from you");
	Serial.println("Enter a command!");
	Serial.println("Keyboard (Xbox controller functionality will come later):");
	Serial.println("W  - Move forward");
	Serial.println("A - Turn left");
	Serial.println("S - Move backwards");
	Serial.println("D – Turn right");

	delay(1000); // another pause

}

void loop() {
  //reading keyboard
	while (Serial.available()) {
		delay(1);
		key = (char)Serial.read();
		switch (key) {

			case 'a' : turningLeft();
				Serial.println("Turning left");
				break;

			case 'd' : turningRight();
				Serial.println("Turning right");
				break;

			case 'w' : movingForward();
				Serial.println("Moving forward");
				break;

			case 's' : movingBackward();
				Serial.println("Moving backward");
				break;



		}
	}



}

void turningLeft() {
  analogWrite(left, standardValue);
}

void turningRight() {
  analogWrite(right, standardValue);
}

void movingForward() {
  analogWrite(forward, standardValue);
}

void movingBackward() {
  analogWrite(backward, standardValue);
}
