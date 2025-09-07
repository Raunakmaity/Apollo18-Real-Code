#include "vex.h"

using namespace vex;
using signature = vision::signature;
using code = vision::code;

// A global instance of brain used for printing to the V5 Brain screen.
brain  Brain;

//The motor constructor takes motors as (port, ratio, reversed), so for example
//motor LeftFront = motor(PORT1, ratio6_1, false);

//Add your devices below, and don't forget to do the same in robot-config.h:
motor LeftFront = motor(PORT1, ratio6_1, false);
motor LeftMiddle = motor(PORT2, ratio6_1, false);
motor LeftBack = motor(PORT3, ratio6_1, false);
motor RightFront = motor(PORT4, ratio6_1, true);
motor RightMiddle = motor(PORT5, ratio6_1, true);
motor RightBack = motor(PORT6, ratio6_1, true);
controller Controller1 = controller(primary);

void vexcodeInit( void ) {
  // nothing to initialize
}