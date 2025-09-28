#include "MQ135.h"

const int MQ135_1 = A0;
const int MQ135_2 = A1;
MQ135 gasSensor1(MQ135_1);
MQ135 gasSensor2(MQ135_2);

// Calibrated RZero values for each sensor
const float CALIBRATED_RZERO_1 = 15.3;   // For MQ135_1 (A0)
const float CALIBRATED_RZERO_2 = 30.27;  // For MQ135_2 (A1)

void setup() {
  Serial.begin(9600);
  gasSensor1.setRZero(CALIBRATED_RZERO_1);
  gasSensor2.setRZero(CALIBRATED_RZERO_2);
}

void loop() {
  float ppm1 = gasSensor1.getPPM();
  float ppm2 = gasSensor2.getPPM();
  Serial.print(ppm1, 1); Serial.print(","); Serial.println(ppm2, 1);
  delay(2000);
}
