/* 
	Test code written for segment 7 of brain.c
	Needs to be run on arduino for get_uptime_ms() to be tested.	
	Should see consistent time changes and dt to be calculated correctly
*/

#include <time.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	/* 
	  time variables are in milliseconds
	*/
	uint32_t t0 = 0; uint32_t t1 = 0; 
	uint32_t dt = 0;

	for(int i = 0; i < 1000; i++){
		t1 = get_uptime_ms();
		dt = t1 - t0;

		printf("t1:%zu, t0:%zu, dt:%zu \n", t1, t0, dt);
		t0 = t1;

	}

}