#pragma config(I2C_Usage, I2C1, i2cSensors)
#pragma config(Sensor, I2C_1,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_2,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_3,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Sensor, I2C_4,  ,               sensorQuadEncoderOnI2CPort,    , AutoAssign)
#pragma config(Motor,  port1,           frontRightMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port2,           frontLeftMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,           backRightMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4,           backLeftMotor, tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,           frontRightPivot, tmotorVex393_MC29, openLoop, encoderPort, I2C_1)
#pragma config(Motor,  port6,           frontLeftPivot, tmotorVex393_MC29, openLoop, encoderPort, I2C_2)
#pragma config(Motor,  port7,           backRightPivot, tmotorVex393_MC29, openLoop, encoderPort, I2C_3)
#pragma config(Motor,  port8,           backLeftPivot, tmotorVex393_MC29, openLoop, encoderPort, I2C_4)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

#pragma platform(VEX)

//Competition Control and Duration Settings
#pragma competitionControl(Competition)
#pragma autonomousDuration(20)
#pragma userControlDuration(120)

#include "Vex_Competition_Includes.c"   //Main competition background code...do not modify!
#include "swerve.h"	//all swerve drive code :)

void pre_auton()
{
  bStopTasksBetweenModes = true;
  nMotorEncoder[frontRightPivot] = 0;
  nMotorEncoder[frontLeftPivot] = 0;
  nMotorEncoder[backRightPivot] = 0;
  nMotorEncoder[backLeftPivot] = 0;
}

task autonomous()
{
	AutonomousCodePlaceholderForTesting();  // Remove this function call once you have "real" code.
}

task usercontrol()
{
	while (true)
	{
	  drive();
	}
}
