#include "main.h"

void setIntake(int power) { intake = power; }

void controlIntake() {
  int power = -127 * (controller.get_digital(DIGITAL_R2) -
                      controller.get_digital(DIGITAL_R1));
  setIntake(power);
}