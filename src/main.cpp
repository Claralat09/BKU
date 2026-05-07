// ============================================
// Includes - Auto-generated from blocks
// ============================================
#include "ky023.h"

#include "LEDMatrix.h"

#include "servos.h"

#include "dcmotor.h"

#include "oled.h"

// ============================================
// Arduino Entry Points
// ============================================

void setup()
{
  // Initialize hardware and peripherals
  initializeServos();
  initDCMotors(15);  // Initialize DC motors: M1, M2, M3, M4
  initKY023(1, 1, 1);  // Initialize joystick (X:1, Y:1, Button:1)
  initOLED();  // Initialize OLED display
}

void loop()
{
  // Main program loop

  if (readKY023X() > 0) {
                            writeToOled("right");  // Display the current buffer on the matrix

              }
                  if (readKY023X()  < 0) {
        writeToOled("stop");  // Turn off all LEDs in the matrix

}
    if (readKY023Y() > 0) {
        setServoAngle(SERVO1, -45);

}
    if (readKY023Y()  < 0) {
        setServoAngle(SERVO1, 45);

}

}
