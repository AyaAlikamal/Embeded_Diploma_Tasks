#include "PlatForm_Types.h"
#define ARRAY_SIZE 10
uint32 Data[ARRAY_SIZE]= {11, 22, 44, 77, 88, 99, 110, 120, 170, 180};
uint32 Searching_Data;
uint32 Search_Data_1(uint32 Data[] , uint32 Searching_Data , uint32 Array_Length);
uint32 Search_Data_2(uint32 Data[] , uint32 Searching_Data , uint32 Array_Length);
uint32 Ret;
int main(){

printf("Enter the Data you want to search for: ");
scanf("%i", &Searching_Data);
Ret = Search_Data_1(Data, Searching_Data, ARRAY_SIZE);
if (Ret == -1)
{
 printf("The data is not foundin the array.\n"); 
}
else{
 printf("The data is found at [%i] index: \n", Ret);
}
printf("--------------------------------------\n");
Ret = Search_Data_2(Data, Searching_Data, ARRAY_SIZE);
if (Ret == -1)
{
 printf("The data is not foundin the array.\n"); 
}
else{
 printf("The data is found at [%i] index: \n", Ret);
}

}



uint32 Search_Data_1(uint32 Data[] , uint32 Searching_Data , uint32 Array_Length){
uint32 index = 0;
for(index = 0 ; index <Array_Length;index++){
    if(Searching_Data == Data[index]){
       return index;
    }
    else{

    }
}
return -1;
}

uint32 Search_Data_2(uint32 Data[] , uint32 Searching_Data , uint32 Array_Length){
uint32 Left_index = 0;
uint32 Right_index = Array_Length-1;
for(Left_index = 0 ; Left_index <= Right_index; ){
    if(Searching_Data == Data[Left_index]){
       return Left_index;
    }
    else{

    }
     if(Searching_Data == Data[Right_index]){
       return Right_index;
    }
    else{

    }
    Right_index--;
    Left_index++;
}
return -1;
}
