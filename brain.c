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
void ADASControl(float f);
float * accRead();
float * gyroRead();
float * kalmanFilter(float data[]);
float * derivation(float valueSum[], float valueNew[], float dt);

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
	ADASControl(-fractionOfOpen)

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

}













int main(){
	startSequence();
}