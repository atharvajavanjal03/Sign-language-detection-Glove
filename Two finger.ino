// Define pin connections for the flex sensors
const int flexSensorWaterPin = A0; // Flex sensor for "I need water"
const int flexSensorFoodPin = A2;  // Flex sensor for "I need food"

// Threshold values for flex sensors
const int thresholdWater = 400; // Adjust this based on calibration for water
const int thresholdFood = 400;  // Adjust this based on calibration for food

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read values from the flex sensors
  int flexSensorWaterValue = analogRead(flexSensorWaterPin);
  int flexSensorFoodValue = analogRead(flexSensorFoodPin);

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
  
  delay(100); // Small delay to stabilize readings
}