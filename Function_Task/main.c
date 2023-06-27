#include <stdio.h>
#include <stdlib.h>

unsigned int Number_one;
unsigned int Number_two;
char operation;
unsigned int calculator ();
unsigned int Result;

int main()
{
 Result= calculator();
 printf("The Result is: %i",Result);
}
unsigned int calculator (){
    unsigned int Output=0;
    printf("Enter the First Number:\n");
    scanf(" %i",&Number_one);
    printf("Enter the Second Number:\n");
    scanf(" %i",&Number_two);
    printf("Enter the Operation:\n");
    scanf(" %c",&operation);

switch(operation){
case '+':
    Output=Number_one + Number_two;
    break;
case '-':
    Output=Number_one - Number_two;
    break;
case '*':
    Output=Number_one * Number_two;
    break;
case '/':
    Output=Number_one / Number_two;
    break;
case '%':
    Output=Number_one % Number_two;
    break;
default:
    Output = 0; //if the operation was out of mentioned
return Output;
}
}
