#include <stdio.h>
#include <stdlib.h>

unsigned int Number_1=5;
unsigned int Number_2=6;
unsigned int Result;
unsigned int  Print_Data(void);

int main(){

Result = Print_Data();
printf("the Total is: %i",Result);
}

unsigned int Print_Data(void){
    unsigned int Result=0;
    Result = Number_1 +Number_2;
    return Result;
}