#include <stdio.h>
#include <stdlib.h>
unsigned int Buttons=0x00;
unsigned int Test_1=0xF0;
unsigned int Test_2=0x07;
//unsigned int result=0;
int main()
{
    Buttons=(Buttons|Test_2);
    printf("Result = %X\n",Buttons);
    Buttons=(Buttons|Test_1);
    printf("Result = %X\n",Buttons);
    //printf("Test = %d\n",Test);
    return 0;
}
