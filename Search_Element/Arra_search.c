#include <stdio.h>

#define MAX_ARRAY_SIZE 5

unsigned int Array[5] = {1,2,3,4,5};
unsigned int Returned_Values = 0;

unsigned int Comparing_Function(unsigned int *array, unsigned int Number);

int main(){
unsigned int number = 8;

Returned_Values = Comparing_Function(Array, number);
if(Returned_Values == 1){
printf("The Number is found in the array ");
}
else{
    printf("The Number is not found in the array ");
}
}

unsigned int Comparing_Function(unsigned int *array, unsigned int Number ){
unsigned int Counter = 0;
unsigned int Values = 0; 
for( Counter = 0; Counter< MAX_ARRAY_SIZE ; Counter++ ){
    if(array[Counter]== Number){
       Values =1;
    }
    else{
        Values = 0;
    }
}
return Values;
}