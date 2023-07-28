#include <stdio.h>
#include "PlatForm_Types.h"
#define MAX_ARRAY_SIZE 10

uint32 My_Array[MAX_ARRAY_SIZE] = { 1 , 4 , 6 , 9 , 5 , 3 , 2 , 8 , 7 , 10};
void Print_Array(uint32 My_Array[] ,uint32 Max_Size);
void Insertion_Sort(uint32 My_Array[], uint32 Max_Size);

int main(){

Print_Array(My_Array , MAX_ARRAY_SIZE);
Insertion_Sort(My_Array , MAX_ARRAY_SIZE);
Print_Array(My_Array, MAX_ARRAY_SIZE);

return 0;
}

void Print_Array(uint32 My_Array[], uint32 Array_Size){
    uint32 Counter = 0;
    for(Counter = 0; Counter < Array_Size ; Counter++){
        printf("%i\t", My_Array[Counter]);
    }
    printf("\n");
}

void Insertion_Sort(uint32 My_Array[], uint32 Max_Size){
uint32 IS_Iteration = 0;
uint32 Inserted_Item = 0;
sint32 Compared_Item_Index = 0;

for(IS_Iteration = 1; IS_Iteration < Max_Size; IS_Iteration++){
Inserted_Item = My_Array[IS_Iteration];
Compared_Item_Index = IS_Iteration - 1;

while ((Inserted_Item < My_Array[Compared_Item_Index]) && (Compared_Item_Index >= 0))
{
  My_Array[Compared_Item_Index + 1] = My_Array[Compared_Item_Index];
  Compared_Item_Index--;
}

My_Array[Compared_Item_Index + 1] = Inserted_Item;
}
}