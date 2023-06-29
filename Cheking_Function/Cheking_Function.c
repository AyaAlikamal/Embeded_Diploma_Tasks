#include <stdio.h>
#include <stdlib.h>

void Checking_Function(unsigned int Number);
unsigned int input;
int main(){
    printf("Enter the Input Number:");
    scanf(" %i", &input);
    Checking_Function(input);

}
void Checking_Function(unsigned int Number){
unsigned int Result=0;
Result =  Number % 2;

if (Result==0){
    printf("The input Number is Even");

}
else{
       printf("The input Number is Odd");
}

}
