#include <stdio.h>
#include "PlatForm_Types.h"

#define  MAX_ARRAY_SIZE 10
uint32 My_Array[MAX_ARRAY_SIZE] = {1 , 4 , 7 , 10 , 9 , 15 , 19 , 20 , 23 , 63};
uint32 My_Array_1[MAX_ARRAY_SIZE] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
void Swap_Function(uint32 *Number_1,uint32 *Number_2 );
void Print_Array(uint32 My_Array[], uint32 Array_Size);
void Bubble_Sort(uint32 My_Array[], uint32 Array_Size);

int main(){

Print_Array(My_Array , MAX_ARRAY_SIZE);
Bubble_Sort(My_Array, MAX_ARRAY_SIZE);
Print_Array(My_Array , MAX_ARRAY_SIZE);

printf("====================\n");

Print_Array(My_Array_1 , MAX_ARRAY_SIZE);
Bubble_Sort(My_Array_1, MAX_ARRAY_SIZE);
}


void Swap_Function(uint32 *Number_1,uint32 *Number_2 ){
uint32 Temp_Variable = *Number_1;
*Number_1 = *Number_2;
*Number_2 = Temp_Variable;
}

void Print_Array(uint32 My_Array[], uint32 Array_Size){
    uint32 Counter = 0;
    for(Counter = 0; Counter < Array_Size ; Counter++){
        printf("%i\t", My_Array[Counter]);
    }
    printf("\n");
}

void Bubble_Sort(uint32 My_Array[], uint32 Array_Size){
uint32 Bulbble_Iteration = 0; 
uint32 Adjast_Iteration = 0;
uint32 Sort_Flag = 0;
for(Bulbble_Iteration = 0; Bulbble_Iteration <Array_Size-1 ; Bulbble_Iteration++){
   for(Adjast_Iteration = 0; Adjast_Iteration <Array_Size-1-Bulbble_Iteration; Adjast_Iteration++){
     if(My_Array[Adjast_Iteration]>My_Array[Adjast_Iteration+1]){
      Swap_Function(&My_Array[Adjast_Iteration], &My_Array[Adjast_Iteration+1]);
      Sort_Flag = 1;
}
}
if(Sort_Flag == 0 ){
    printf("The Array is Sorted");
    return;
   }
 }
}