#include <stdio.h>
#include <stdlib.h>


double * delta(double * ActualValues, double * ModelValues){
	double * change = calloc(3, sizeof(double));

	change[0] = ActualValues[0] - ModelValues[0];
	change[1] = ActualValues[1] - ModelValues[1];
	change[2] = ActualValues[2] - ModelValues[2];

	return change;
}



int main(){

	double * av = calloc(3, sizeof(double));
	double * mv = calloc(3, sizeof(double));


	av[0] = 10.3; av[1] = 11.7; av[2] = 12.5;
	mv[0] = 5.1; mv[1] = 6.36; mv[2] = 7.122;

	double * final = delta(av, mv);

	printf("%f\n", final[0]);
	printf("%f\n", final[1]);
	printf("%f\n", final[2]);

	free(av); free(mv); free(final);
	av = NULL; mv = NULL; final = NULL;

}