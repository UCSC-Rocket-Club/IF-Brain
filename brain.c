/* brain.c */

/*
libraries and other c software we create

#include ...
#include ...

*/ 

/* 
macro definitions
#define

*/

/* function definitions */
void startSequence();
void feedbackLoop(int initalData[]); 
bool cleanUp();
float ADASRead();
void ADASDeploy(float f);
float * accRead();
float * gyroRead();
float * kalmanFilter(float data[]);
float * derivation(float valueSum[], float valueNew[], float dt);
void writeData(/* all the data */);
void ADASControl(/* control values */);
float bestFitFcn(float time);


/*  Segment 1 */
/* Start Sequence */
void startSequence(){
	while(condition){
		// record last ~2 seconds data
	}

	feedbackLoop(data);
}

/* Segment 2 */
/* Feedback loop start */ 

void feedbackLoop(initalData){
	/* global variables */
	// kalman filter state variables 
	// gyroData
	// accData
	// sums of accData
	// sums of gyroData
	// time var

	while(feedbackConditon){
		/* Segment 5 */
		/* Sensor interface */
		
		// set data from accRead() into readable data
		// set data from gyroRead() into readable data


		/* Segment 6 */
		/* Kalman Filter */
		// Pass matrix and state variables into Kaman filter
		{stateVars} = kalmanFilter(accData);
		{stateVars} = kalmanFilter(gyroData);

		/* Segment 7 */
		/* Calculate dt */
		// talk with electrical to find best way to do this

		/* Segment 8 */
		/* 3.D. Calculations */
		float vLinear[] += derivation(vLinear, accLinear, dt);
		float pLinear[] += derivation(pLinear, vLinear, dt);

		float vAngular[] += derivation(vAngular, accAngular, dt);
		float angAngular[] += derivation(angAngular, vAngular, dt);  

		/* Segment 10 */
		/* Write Data */
		writeData(/* however you choose to package it*/);

		/* Segment 11 */
		/* Control Variables */
		|angle(t)|
		acceleraton(t)
		velocity(t)
		altitude(t)

		/* Segment 12 */
		/* ADAS Control Handoff */
		ADASControl(/* ADAS Control Values*/);

	}

	/* Segment 3 */
	/* Commence of Cleanup */
	while (success == cleanUp() == false) {}
}

/* Segment 4 */
/* Retract ADAS fins */
bool cleanUp(){
	// see how open ADAS is
	float fractionOfOpen = ADASRead();
	// retract ADAS fins
	ADASDeploy(-fractionOfOpen)

	float success = ADASRead();
	if(success == 0.0){
		return true
	}else{
		// FIX IT
	}
}

/* Segment 9 */
/* Derivation Function */
float * derivation(float valueSum[], float valueNew[], dt){

	return derived;
}


void writeData(/* so much data */){
	// interact with SD card driver
}

void ADASControl(/* control values */){
	/* Segment 12 */
	if(/* out of burn phase*/){
		
		/* Segment 13 */
		/* Model(t) */
		float prediction = bestFitFcn(t);

		/* Segment 14 */
		/* calculate deltas */
		// find out how data is represented, then subtract

		/* Segment 15 */
		/* fraction of f deployed */
		changeInA = ((densityAir(z)*(v(t)^2))/2M) * changeInB(f)
		f = //...

		/* Segement 16 */
		/* Deploy ADAS */
		// see how open ADAS is
		float fractionOfOpen = ADASRead();
		// retract ADAS fins
		ADASDeploy(-fractionOfOpen)



	}
}

/* Modeling team will provide, but we need to implement */
float bestFitFcn(float time){

	return prediction;
}





int main(){
	startSequence();
}