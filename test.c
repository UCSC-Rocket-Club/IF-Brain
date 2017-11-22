//////////////////////////////////////////////
// Names: Johnson | Pattawut
// Date: 11/16/2017
// Description: for segment 8
///////////////////////////////////////////////

//messing with pointers to a 2x3 array.

#include<stdio.h>
#include<stdlib.h>

void test1();
// void test2();
int** swap2x3(int **ptr);
double derivation(double *valueSum, double *valueNew, double dt);
//working with 2x3 arrays

int main(){
     // printf("hello world \n");
     test1();

     //ask Daniel whether he will be storing his data into my 2x3 array or just
     //hand me a 1x3 array and I'll store it in 2x3 array
     //basically swap the rows and then throw into derivation
     //simple.

     return 0;
}

double derivation(double *valueSum, double *valueNew, double dt){
     return 0;
}

 int** swap2x3(int **ptr){
     //col = 3, row = 2. Want to swap the 2 rows.
     int temp = ptr[0];
     ptr[0] = ptr[1];
     ptr[1] = temp;
     return ptr;
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
     for(int i=0 ; i<row ; i++){             //just making the contenst 1 2 3 4 etc
          for(int j=0 ; j<col ; j++){
               // array[i][j] = count++;
               *(*(array+i)+j) = count++;    //same as line above it.
               printf("%d ", array[i][j]);
          }
     }

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
     printf("Content at *[1]   : %d\n\n", *array[1]);

     // int test = array[0];
     // printf("test: %d\n\n",test);
     // array[0] = array[1];
     // array[1] = test;
     array = swap2x3(array);

     printf("AFTER SWAP:\n");

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


     //free memory
     exit(1);
}
