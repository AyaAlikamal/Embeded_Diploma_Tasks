#include <stdio.h>
#include <stdlib.h>

void Swapping_Function(unsigned short int Number_1 , unsigned short int Number_2 );
unsigned short int Number_One;
unsigned short int Number_Two;

int main(){
printf(" Enter the First Number:");
scanf(" %i", &Number_One);
printf(" Enter the Second Number:");
scanf(" %i", &Number_Two);
printf(" The Numbers Before Swapping is = %i , %i ", Number_One, Number_Two);
printf("\n");
Swapping_Function(Number_One , Number_Two);

}

void Swapping_Function(unsigned short int Number_1 , unsigned short int Number_2 ){
unsigned short int Swapping_Element=0;
Swapping_Element = Number_1;
Number_1 = Number_2;
Number_2 = Swapping_Element;
printf("The Nubers After Swapping is:");
printf("The first Number is = %i \t", Number_1); 
printf("The second Number is = %i", Number_2);


}