#pragma once

#include "EZ-Template/api.hpp"
#include "EZ-Template/piston.hpp"
#include "api.h"
#include "pros/adi.hpp"
#include "pros/motors.hpp"

extern Drive chassis;

// Your motors, sensors, etc. should go here.
inline pros::Motor lift_r(-10);
inline pros::Motor lift_l(9);
inline void setlift(int position){
   lift_l.move(position);
   lift_r.move(position);
}


inline ez::PID liftPID{0.45, 0, 0.1, 0, "Lift"};
inline ez::Piston Claw('A');
