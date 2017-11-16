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
int ADASRead();
void ADASControl(int f);


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

	while(feedbackConditon){

	}

	/* Segment 3 */
	/* Commence of Cleanup */
	while (success == cleanUp() == false) {}
}

bool cleanUp(){
	// see how open ADAS is
	fractionOfOpen = ADASRead();
	// retract ADAS fins
	ADASControl = ADASControl(-fractionOfOpen)

	success = ADASRead();
	if(success == 0){
		return true
	}else{
		// FIX IT
	}
}













int main(){
	startSequence();
}