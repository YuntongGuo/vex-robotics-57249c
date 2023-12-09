using namespace vex;

extern brain Brain;

// VEXcode devices
extern motor RightBack;
extern motor RightMiddle;
extern motor RightFront;
extern motor LeftBack;
extern motor LeftMiddle;
extern motor LeftFront;
extern motor Intake;
extern motor Catapult;
extern rotation CataRotation;
extern digital_out PneumaticA;
extern digital_out PneumaticH;
extern distance Distance;
extern digital_out PneumaticB;

/**
 * Used to initialize code/tasks/devices added using tools in VEXcode Pro.
 * 
 * This should be called at the start of your int main function.
 */
void  vexcodeInit( void );