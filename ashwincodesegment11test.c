/* code segment number 11
By Ashwin Balaguru
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*code segment next*/
/* Segment 11 */
/* Control Variables
|angle(t)|
acceleraton(t)
velocity(t)
altitude(t)
acc_lin
acc_ang
vel_lin
vel_ang
pos_lin
ang_ang
dt
*/
//////////////////////////////////////////////pdr formulas ignore this
/*
|angle(t)| = max(angle(u,v,w,t))
acceleration(t) += alinear(x,y,z,t)*dt/sin(|angle(t)|)
velocity(t) += alinear(z,t)*dt/sin(|angle(t)|)
altitude(t) += vlinear(z,t)*dt/sin(|angle(t)|) */
//////////////////////////////////////////////ignore all this
//get dt from earlier Segment 7
//get acc_lin[2],vel_lin[2],pos_lin[2] from segment 8
//get acc_ang[2],vel_ang[2],ang_ang[2] from segment 8
//vectorangle(t) = sqrt(pow(acc_angx,2)+pow(vel_ang,2)+
/*vector(t) = sqrt(pow(typex,2)+pow(typey,2)+pow(typez,2))
vectorAcceleration(t) = sqrt(pow(acc_linx,2)+pow(acc_liny,2)+pow(acc_linz,2))
vectorVelocity(t) = sqrt(pow(vel_linx,2)+pow(vel_liny,2)+pow(vel_linz,2))
vectorPosition(t) = sqrt(pow(pos_linx,2)+pow(pos_liny,2)+pow(pos_linz,2))
vectorAngleaccel(t) = sqret(pow(acc_angx,2)+pow(acc_angy,2)+pow(acc_angz,2))
vectorAnglevel(t)
vectorAnglepos(t)*/
////////////////////////////////////////////////ignore this
//
//actual code starts here
//get angular acceleration; linear acceleration,velocity,position data
//this make an array
void makearray();{
  double ** controlArray(int col, int row){
    double ** controlArraySeg;
    controlArraySeg = malloc(3*sizeof(double)*row);
    controlArraySeg[0] = malloc(3*sizeof(double)*col*row);
    for(int i=0;i<row;i++){
      controlArraySeg[i] = (*controlArraySeg + col*i);
        }
  return controlArraySeg;
      }
}
double **accel_ang = controlArray(3,3);
double **vel_ang = controlArray(3,3);
double **pos_ang = controlArray(3,3);
//this does the actual Calculations
//converting angular acceleration into max angles through 2 integrations and then using sqrt to get 1 dimensional angles
//the 1 dimensional angle is then converted into absolute value
vel_ang = integrate(accel_angu,accel_angv,accel_angw);
pos_ang = integrate(vel_angu,vel_angu,vel_angw);
angle_t = max(sqrt(pow(vel_angu,2)+pow(vel_angv,2)+pow(vel_angw,2)));
maxangle = abs(angle_t);
//after here goes the acceleration(t),altitude(t),and velocity(t) Data
