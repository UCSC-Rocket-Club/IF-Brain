///////////////////////////////////////////////
// Names: Johnson | Pattawut 
// Date: 11/16/2017
// Description: for segment 8
///////////////////////////////////////////////

//ask what kind of arguments these are.
//how to calculate linear velocity?
     //think we are given accLinear and dt
     //from there, we get integral
     //that is segment 9 job
//for segment 8.

//input to segment 8:
//taking values
//from these 9 values, do 12 caluclations
//acceloration is given from accelorametor with x y z in linear and angular. also dt given
//from that, will get velocity x y z
//then position x y z
//have to do with linear and angular so 6 + 6 is 12 derivations
//output linear acceleartion and angular acceleration in a clean way
//think I will output 1x3 array[x,y,z]
//use double.

#include<stdio.h>
#include<stdlib.h>

double accel_lin[3], accel_ang[3], veloc_lin[3], veloc_ang[3], posit_lin[3], posit_ang[3];

double derivation(double valueSum, double valueNew, double dt);
void segment8(double ax_lin, double ay_lin, double az_lin, double ax_ang, double ay_ang, double az_ang, double dt);

int main(){
     segment8(1,2,3,1,2,3,5);
}


double derivation(double valueSum, double valueNew, double dt){
     return 0;
}

//this is what will be used for brain.c
void segment8(double ax_lin, double ay_lin, double az_lin, double ax_ang, double ay_ang, double az_ang, double dt){
     //this function takes in dt, linear and angular acceleration.
     //will output 6 nice 1x3 arrays to be read later
     //this will go in a while loop each time there is an interrupt basically
     //each interrupt will have a new dt blah blah
     accel_lin[0] = ax_lin;
     accel_lin[1] = ay_lin;
     accel_lin[2] = az_lin;
     accel_ang[0] = ax_ang;
     accel_ang[1] = ay_ang;
     accel_ang[2] = az_ang;

     veloc_lin[0] = derivation(veloc_lin[0], accel_lin[0], dt);
     veloc_lin[1] = derivation(veloc_lin[1], accel_lin[1], dt);
     veloc_lin[2] = derivation(veloc_lin[2], accel_lin[2], dt);
     veloc_ang[0] = derivation(veloc_ang[0], accel_ang[0], dt);
     veloc_ang[1] = derivation(veloc_ang[1], accel_ang[1], dt);
     veloc_ang[2] = derivation(veloc_ang[2], accel_ang[2], dt);

     posit_lin[0] = derivation(posit_lin[0], veloc_lin[0], dt);
     posit_lin[1] = derivation(posit_lin[1], veloc_lin[1], dt);
     posit_lin[2] = derivation(posit_lin[2], veloc_lin[2], dt);
     posit_ang[0] = derivation(posit_ang[0], veloc_ang[0], dt);
     posit_ang[1] = derivation(posit_ang[1], veloc_ang[1], dt);
     posit_ang[2] = derivation(posit_ang[2], veloc_ang[2], dt);

     //this can be shortened if the derivation function takes in 1x3array
     //arguments and spits out one as well.


}
