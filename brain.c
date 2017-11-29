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

void writeData(/* all the data */);
void ADASControl(/* control values */);
float bestFitFcn(float time);

double **make2d(int col, int row);
double** swapOldNew(double **ptr);
double* integrate(double **ds, double dt);


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

		//**************************************
		/* Segment 8 */
		/* 3.D. Calculations */

		//get integral
		//acc_lin[1] = inputed from above.
		//acc_ang[1] = inputed from above.
          vel_lin[1] = integrate(acc_lin, dt);
		vel_ang[1] = integrate(acc_ang, dt);
          pos_lin[1] = integrate(vel_lin, dt);
		ang_ang[1] = integrate(vel_ang, dt);
          //add onto the total
          for(int j=0 ; j<3 ; j++){
               acc_lin[2][j] = acc_lin[2][j] + acc_lin[1][j];
               vel_lin[2][j] = vel_lin[2][j] + vel_lin[1][j];
               pos_lin[2][j] = pos_lin[2][j] + pos_lin[1][j];

			acc_ang[2][j] = acc_ang[2][j] + acc_ang[1][j];
               vel_ang[2][j] = vel_ang[2][j] + vel_ang[1][j];
               ang_ang[2][j] = ang_ang[2][j] + ang_ang[1][j];
          }
		//swap old and new values.
          acc_lin = swapOldNew(acc_lin);
          vel_lin = swapOldNew(vel_lin);
          pos_lin = swapOldNew(pos_lin);

		acc_ang = swapOldNew(acc_ang);
          vel_ang = swapOldNew(vel_ang);
          ang_ang = swapOldNew(ang_ang);

		//**************************************

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
double* integrate(double **ds, double dt){
     double *baseSum = malloc(3 * sizeof(double));
     for(int i=0 ; i<3 ; i++){
          baseSum[i] = dt * (ds[0][i] + ds[1][i])/2;
     }
     return baseSum;
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

//this will create an 2d array in pointer land of [col][row]
double** make2d(int col, int row){
     double **array;
     array = (double **)malloc(sizeof(double *) * row);
     array[0] = (double *)malloc(sizeof(double)* col * row);
     for(int i=0 ; i<row ; i++){
          array[i] = (*array + col * i);
     }
     return array;
}
//this is for swapping old and new value
double** swapOldNew(double **ptr){
    double *temp = ptr[0];
    ptr[0] = ptr[1];
    ptr[1] = temp;
    return ptr;
}


int main(){
	startSequence();
}
