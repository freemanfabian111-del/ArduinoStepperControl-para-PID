#include<AccelStepper.h>
  #define X_STEP 2
  #define X_DIR  5
  #define Y_STEP 3
  #define Y_DIR 6
  #define Z_STEP 4
  #define Z_DIR 7
  #define E_STEP 8
  #define E_DIR 9

  AccelStepper motorX(AccelStepper::DRIVER,X_STEP,X_DIR);
  AccelStepper motorY(AccelStepper::DRIVER,Y_STEP,Y_DIR);
  AccelStepper motorZ(AccelStepper::DRIVER,Z_STEP,Z_DIR);
  AccelStepper motorE(AccelStepper::DRIVER,E_STEP,E_DIR);



void setup() {
  motorX.setMaxSpeed(500);
  motorX.setAcceleration(100);

  motorY.setMaxSpeed(500);
  motorY.setAcceleration(100);

  motorZ.setMaxSpeed(300);
  motorZ.setAcceleration(80);

  motorE.setMaxSpeed(200);
  motorE.setAcceleration(50);





}

void loop() {
  motorX.moveTo(200);

  motorY.moveTo(200);

  motorZ.moveTo(100);

  motorE.moveTo(50);

  motorX.run();
  motorY.run();
  motorZ.run();
  motorE.run();

  if(motorX.distanceToGo()==0)
  motorX.moveTo(-motorX.currentPosition());
if(motorY.distanceToGo()==0)
  motorY.moveTo(-motorY.currentPosition());
if(motorZ.distanceToGo()==0)
  motorZ.moveTo(-motorZ.currentPosition());
if(motorE.distanceToGo()==0)
  motorE.moveTo(-motorE.currentPosition());

}
