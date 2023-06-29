#include <stdio.h>
#include <stdlib.h>

unsigned int Get_Square(unsigned int Number); 
unsigned int output;
unsigned int input;

int main(){

printf("Enter the Number:");
scanf(" %i", &input);
output = Get_Square(input);
printf("The Square of the Number is = %i ", output);

}
unsigned int Get_Square(unsigned int Number){
unsigned int Result=0;
  Result = (Number*Number);
return Result;
}