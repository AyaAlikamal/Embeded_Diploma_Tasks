#include <stdio.h>

unsigned int Number_1 = 8;
unsigned int Number_2 = 7;
void Swap_Numbers(unsigned int *Num1,unsigned int *Num2);

int main(){

printf("Number_1 = %i\tNumber_2 = %i \n", Number_1, Number_2);
Swap_Numbers(&Number_1 , &Number_2);
printf("Number_1 = %i\tNumber_2 = %i \n", Number_1, Number_2);

}

void Swap_Numbers(unsigned int *Num1 , unsigned int *Num2){
unsigned int temp = 0;
 temp = *Num1;
*Num1 = *Num2;
*Num2 = temp;
printf("Number_1 = %i\tNumber_2 = %i \n", *Num1, *Num2);
}

