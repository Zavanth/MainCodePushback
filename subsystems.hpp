#pragma once

#include "EZ-Template/api.hpp"
#include "api.h"
#include "pros/motor_group.hpp"
#include "pros/motors.hpp"
#include "pros/optical.h"

extern Drive chassis;
// inline pros::Motor trapMotor(1);
inline pros::Motor bottomIntake(20); //switch this to one full motor
inline pros::Motor topIntake(17);
inline pros::Motor trapMotor(11);  
inline pros::Optical optical_sensor(15);

// Your motors, sensors, etc. should go here.  Below are examples

// inline pros::Motor intake(1);
// inline pros::adi::DigitalIn limit_switch('A');