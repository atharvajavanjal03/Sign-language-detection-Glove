// Define pin connections for the flex sensors
const int flexSensorWaterPin = A0; // Flex sensor for "I need water"
const int flexSensorFoodPin = A2;  // Flex sensor for "I need food"
const int flexSensorToiletPin = A4; // Flex sensor for "I need to use the toilet"
const int flexSensorPhonePin = A5;  // Flex sensor for "I need to make a phone call"

// Threshold values for flex sensors
const int thresholdWater = 400; // Adjust this based on calibration for water
const int thresholdFood = 400;  // Adjust this based on calibration for food
const int thresholdToilet = 400; // Adjust this based on calibration for toilet
const int thresholdPhone = 400;  // Adjust this based on calibration for phone call

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read values from the flex sensors
  int flexSensorWaterValue = analogRead(flexSensorWaterPin);
  int flexSensorFoodValue = analogRead(flexSensorFoodPin);
  int flexSensorToiletValue = analogRead(flexSensorToiletPin);
  int flexSensorPhoneValue = analogRead(flexSensorPhonePin);

  // Check if the first flex sensor is bent for "I need water"
  if (flexSensorWaterValue > thresholdWater) {
    Serial.println("I need water");
    delay(5000); // Delay for 5 seconds after the bend
  }

  // Check if the second flex sensor is bent for "I need food"
  if (flexSensorFoodValue > thresholdFood) {
    Serial.println("I need food");
    delay(5000); // Delay for 5 seconds after the bend
  }

  // Check if the third flex sensor is bent for "I need to use the toilet"
  if (flexSensorToiletValue > thresholdToilet) {
    Serial.println("I need to use the toilet");
    delay(5000); // Delay for 5 seconds after the bend
  }

  // Check if the fourth flex sensor is bent for "I need to make a phone call"
  if (flexSensorPhoneValue > thresholdPhone) {
    Serial.println("I need to make a phone call");
    delay(5000); // Delay for 5 seconds after the bend
  }

  delay(100); // Small delay to stabilize readings
}