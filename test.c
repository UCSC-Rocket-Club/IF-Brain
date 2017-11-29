//////////////////////////////////////////////
// Names: Johnson | Pattawut
// Date: 11/16/2017
// Description: for segment 8
///////////////////////////////////////////////

//messing with pointers to a 2x3 array.

#include<stdio.h>
#include<stdlib.h>

// void test1();
void test2();
double dt = 0;
double** make2d(int col, int row);

double** swapOldNew(double **ptr);
double* derivation(double **ds, double dt);
void print2d(double **ptr, char string[]);
//working with 2x3 arrays

int main(){
     test2();
     return 0;
}

double* derivation(double **ds, double dt){
     double *baseSum = malloc(3 * sizeof(double));
     for(int i=0 ; i<3 ; i++){
          baseSum[i] = dt * (ds[0][i] + ds[1][i])/2;
     }
     return baseSum;
}

 double** swapOldNew(double **ptr){
     //col = 3, row = 2. Want to swap the 2 rows.
     double *temp = ptr[0];
     ptr[0] = ptr[1];
     ptr[1] = temp;
     return ptr;
}

double** make2d(int col, int row){
     double **array;
     array = (double **)malloc(sizeof(double *) * row);
     array[0] = (double *)malloc(sizeof(double)* col * row);
     for(int i=0 ; i<row ; i++){
          array[i] = (*array + col * i);
     }
     return array;
}

void print2d(double **ptr, char string[]){
     printf("\n%s:\n", string);
     printf("[");
     for(int i=0 ; i<3 ; i++){
          printf("%f ", ptr[0][i]);
     }
     printf("\b]\n[");
     for(int i=0 ; i<3 ; i++){
          printf("%f ", ptr[1][i]);
     }
     printf("\b]\n[");
     for(int i=0 ; i<3 ; i++){
          printf("%f ", ptr[2][i]);
     }
     printf("\b]");
     printf("\n\n");
}

void test2(){
     double **acc = make2d(3,3);
     double **vel = make2d(3,3);
     double **pos = make2d(3,3);

     double acc_x[5] = {0,1,2,3,4};
     double acc_y[5] = {0,1,2,3,4};
     double acc_z[5] = {0,1,2,3,4};
     double dt[5]    = {1,1,1,1,1};

     for(int i=0 ; i<5 ; i++) {
          //get incoming values for acceleration
          acc[1][0] = acc_x[i];
          acc[1][1] = acc_y[i];
          acc[1][2] = acc_z[i];

          //get derivation
          vel[1] = derivation(acc, dt[i]);
          pos[1] = derivation(vel, dt[i]);
          //add onto the total
          for(int j=0 ; j<3 ; j++){
               acc[2][j] = acc[2][j] + acc[1][j];
               vel[2][j] = vel[2][j] + vel[1][j];
               pos[2][j] = pos[2][j] + pos[1][j];
          }

          print2d(acc, "acceleration");
          print2d(vel, "velocity");

          acc = swapOldNew(acc);
          vel = swapOldNew(vel);
          pos = swapOldNew(pos);

     }

     // derivation(acc,dt);
     // derivation(vel,dt);
}

// void test1(){
//      int col = 3;
//      int row = 2;
//      int count = 0;
//      int **array;
//      array = (int **)malloc(sizeof(int *) * row);
//      array[0] = (int *)malloc(sizeof(int)* col * row);
//      for(int i=0 ; i<row ; i++){
//           array[i] = (*array + col * i);
//      }
//      for(int i=0 ; i<row ; i++){             //just making the contenst 1 2 3 4 etc
//           for(int j=0 ; j<col ; j++){
//                // array[i][j] = count++;
//                *(*(array+i)+j) = count++;    //same as line above it.
//                printf("%d ", array[i][j]);
//           }
//      }
//
//      printf("\nAddress of array+0: %d\n", array); //think this points to array[0][0]
//      printf("Address of array+1: %d\n\n", array+1); //think this points to array[1][0]
//
//      printf("Content at [0][0] : %d\n", array[0][0]);
//      printf("Address at [0][0] : %d\n", &array[0][0]);
//      printf("Content at [0][1] : %d\n", array[0][1]);
//      printf("Address at [0][1] : %d\n", &array[0][1]);
//      printf("Content at [0][2] : %d\n", array[0][2]);
//      printf("Address at [0][2] : %d\n", &array[0][2]);
//      printf("Content at [0][3] : %d\n", array[0][3]);
//      printf("Address at [0][3] : %d\n\n", &array[0][3]);
//
//      printf("Content at [1][0] : %d\n", array[1][0]);
//      printf("Address at [1][0] : %d\n", &array[1][0]);
//      printf("Content at [1][1] : %d\n", array[1][1]);
//      printf("Address at [1][1] : %d\n", &array[1][1]);
//      printf("Content at [1][2] : %d\n", array[1][2]);
//      printf("Address at [1][2] : %d\n\n", &array[1][2]);
//
//      printf("Address at  [0]   : %d\n", array[0]);
//      printf("Content at *[0]   : %d\n", *array[0]);
//      printf("Address at  [1]   : %d\n", array[1]);
//      printf("Content at *[1]   : %d\n\n", *array[1]);
//
//      // int test = array[0];
//      // printf("test: %d\n\n",test);
//      // array[0] = array[1];
//      // array[1] = test;
//      array = swap2x3(array);
//
//      printf("AFTER SWAP:\n");
//
//      printf("Content at [0][0] : %d\n", array[0][0]);
//      printf("Address at [0][0] : %d\n", &array[0][0]);
//      printf("Content at [0][1] : %d\n", array[0][1]);
//      printf("Address at [0][1] : %d\n", &array[0][1]);
//      printf("Content at [0][2] : %d\n", array[0][2]);
//      printf("Address at [0][2] : %d\n", &array[0][2]);
//      printf("Content at [0][3] : %d\n", array[0][3]);
//      printf("Address at [0][3] : %d\n\n", &array[0][3]);
//
//      printf("Content at [1][0] : %d\n", array[1][0]);
//      printf("Address at [1][0] : %d\n", &array[1][0]);
//      printf("Content at [1][1] : %d\n", array[1][1]);
//      printf("Address at [1][1] : %d\n", &array[1][1]);
//      printf("Content at [1][2] : %d\n", array[1][2]);
//      printf("Address at [1][2] : %d\n\n", &array[1][2]);
//
//
//      //free memory
//      exit(1);
// }
