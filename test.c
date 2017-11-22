//////////////////////////////////////////////
// Names: Johnson | Pattawut
// Date: 11/16/2017
// Description: for segment 8
///////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>

void test1();
double derivation(double *valueSum, double *valueNew, double dt);
//working with 2x3 arrays

int main(){
     // printf("hello world \n");
     test1();
     return 0;
}

double derivation(double *valueSum, double *valueNew, double dt){
     return 0;
}

void test1(){
     int col = 3;
     int row = 2;
     int count = 0;
     int **array;
     array = (int **)malloc(sizeof(int *) * row);
     array[0] = (int *)malloc(sizeof(int)* col * row);
     for(int i=0 ; i<row ; i++){
          array[i] = (*array + col * i);
     }
     for(int i=0 ; i<row ; i++){
          for(int j=0 ; j<col ; j++){
               // array[i][j] = count++;
               *(*(array+i)+j) = count++;
               printf("%d ", array[i][j]);
          }
     }
     // for(int i=0 ; i<row ; i++){
     //      for(int j=0 ; j<col ; j++){
     //           printf("%d ", array[i][j]);
     //      }
     // }

     printf("\nAddress of array+0: %d\n", array); //think this points to array[0][0]
     printf("Address of array+1: %d\n\n", array+1); //think this points to array[1][0]

     printf("Content at [0][0] : %d\n", array[0][0]);
     printf("Address at [0][0] : %d\n", &array[0][0]);
     printf("Content at [0][1] : %d\n", array[0][1]);
     printf("Address at [0][1] : %d\n", &array[0][1]);
     printf("Content at [0][2] : %d\n", array[0][2]);
     printf("Address at [0][2] : %d\n", &array[0][2]);
     printf("Content at [0][3] : %d\n", array[0][3]);
     printf("Address at [0][3] : %d\n\n", &array[0][3]);

     printf("Content at [1][0] : %d\n", array[1][0]);
     printf("Address at [1][0] : %d\n", &array[1][0]);
     printf("Content at [1][1] : %d\n", array[1][1]);
     printf("Address at [1][1] : %d\n", &array[1][1]);
     printf("Content at [1][2] : %d\n", array[1][2]);
     printf("Address at [1][2] : %d\n\n", &array[1][2]);

     printf("Address at  [0]   : %d\n", array[0]);
     printf("Content at *[0]   : %d\n", *array[0]);
     printf("Address at  [1]   : %d\n", array[1]);
     printf("Content at *[1]   : %d\n", *array[1]);
     //free memory
     exit(1);
}
