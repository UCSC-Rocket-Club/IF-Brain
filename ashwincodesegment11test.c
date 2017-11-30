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
//////////////////////////////////////////////
|angle(t)| = max(angle(u,v,w,t))
acceleration(t) += alinear(x,y,z,t)*dt/sin(|angle(t)|)
velocity(t) += alinear(z,t)*dt/sin(|angle(t)|)
altitude(t) += vlinear(z,t)*dt/sin(|angle(t)|)
//////////////////////////////////////////////
//get dt from earlier Segment 7
//get acc_lin[2],vel_lin[2],pos_lin[2] from segment 8
//get acc_ang[2],vel_ang[2],ang_ang[2] from segment 8
//vectorangle(t) = sqrt(pow(acc_angx,2)+pow(vel_ang,2)+
vector(t) = sqrt(pow(typex,2)+pow(typey,2)+pow(typez,2))
vectorAcceleration(t) = sqrt(pow(acc_linx,2)+pow(acc_liny,2)+pow(acc_linz,2))
vectorVelocity(t) = sqrt(pow(vel_linx,2)+pow(vel_liny,2)+pow(vel_linz,2))
vectorPosition(t) = sqrt(pow(pos_linx,2)+pow(pos_liny,2)+pow(pos_linz,2))
vectorAngleaccel(t) = sqret(pow(acc_angx,2)+pow(acc_angy,2)+pow(acc_angz,2))
vectorAnglevel(t)
vectorAnglepos(t)
