/* brain.c */

#include <stdio.h>
#include <stdlib.h>

/* Segment 10 include */
#include <utility/SD.h>


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
void writeData(File launchDataFile, DATA);
void ADASControl(/* control values */);
float bestFitFcn(float time);
/* Segment 14 */
double * delta(double * ActualValues, double * ModelValues);


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


	/* ---------------------------------
	/ Segment 10 SD card setup
	------------------------------------*/
	// Initalize file wrapper included in SD.h
	File launchDataFile;

	// Initialize sd card on csPin 4. Need to change if using different csPin. see SD.cpp
	if (!SD.begin(4)) {
	    exit(1);
	}

	launchDataFile = SD.open("launchData.txt", FILE_WRITE);



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
		if(launchDataFile){
			writeData(launchDataFile, DATA);
		}

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

	// Close File wrapper handle
	launchDataFile.close();

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


/* Segment 10 function */
void writeData(File handle, DATA){\
	size_t num_bytes;
	uint8_t *buf_ptr;

	// malloc buf_ptr
	// change what it points at

	// example call to file write
	handle.write(const buf_ptr, num_bytes);

	return;
}

void ADASControl(/* control values */){
	/* Segment 12 */
	if(/* out of burn phase*/){
		
		/* Segment 13 */
		/* Model(t) */
		float prediction = bestFitFcn(t);

		/* Segment 14 */
		/* calculate deltas */
		double * deltas = delta(actualValues, modelValues);


		/* Segment 15 */
		/* fraction of f deployed */
		changeInA = ((densityAir(z)*(v(t)^2))/2M) * changeInB(f)
		f = //...

		// Free ptr to deltas array
		free(deltas);
		deltas = NULL;

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


/* delta, calculates change in acc, vel, altitude */
double * delta(double * actualValues, double * modelValues){
	double * change = calloc(3, sizeof(double));

	change[0] = actualValues[0] - modelValues[0];
	change[1] = actualValues[1] - modelValues[1];
	change[2] = actualValues[2] - modelValues[2];

	return change;
}




int main(){


	startSequence();
}