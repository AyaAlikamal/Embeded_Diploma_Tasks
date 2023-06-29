#include <stdio.h>

unsigned int Number;
unsigned int Armstrong_Cheker(unsigned int input);
unsigned int Perfect_Cheker(unsigned int input);

int main(){

printf("Enter the Number:");
scanf(" %i", &Number);
if(Armstrong_Cheker(Number)==1){
    printf("The Input Number Is Armstrog\n");
}
else{
    printf("The Input Number Is Not Armstrog\n");
}
if(Perfect_Cheker(Number)==1){
    printf("The Input Number Is Perfect\n");
}
else{
    printf("The Input Number Is Not Perfect\n");
}

}
unsigned int Armstrong_Cheker(unsigned int input){
    unsigned int Sum=0;
    unsigned int Last_Digit=0;
while(input!=0){
 Last_Digit = input % 10;
 Sum += Last_Digit * Last_Digit *Last_Digit;
 input = input /10;
}
return 1;
}

unsigned int Perfect_Cheker(unsigned int input){
    unsigned int Sum=0;
    unsigned int Counter=0;
    for(Counter=1 ; Counter< input; Counter++){
        if(input %  Counter){
            Sum+=Counter;
        }
    }
    return 1;
}

