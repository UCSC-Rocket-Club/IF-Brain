//segment 14 need to know variable names 
//what types these variables are 
//what best way to find change in do absolute 

//from the on board libarary on the ardunio 101 accelerometer floats ax, ay, az
//altimeter
//gyroscope
//I only have 3 variables AccerationZ, VelocityZ, altitude;

// int main(int argc, char* argv[]){
	// float acceleration; //this would have the ax , ay ,az
	// float velocity; //this would have vx, vy, vz
	// float  altitude;
	// double[3] ActualValues;
	// double[3] ModelValues;
	double[] delta(float[] ActualValues, float[]  ModelValues)
	{
		 float[3] change;
		 change[0] = ActualValues[0] -ModelValues[0];
		 chaneg[1] = ActualValues[1]-ModelValues[1];
		 change[2] = ActualValues[2] -ModelValues[2];
		 return change;
	}
// }