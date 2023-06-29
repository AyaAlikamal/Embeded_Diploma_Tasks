#include <stdio.h>
 
unsigned int Number;
void Prime_Cheker(unsigned int Input);
int main(){
printf("Enter the Number:");
scanf(" %i", &Number); 
Prime_Cheker(Number);

}

void Prime_Cheker(unsigned int Input){
    if((Number % 2)){
if((Number % 3)){
    if((Number % Number)==0){
        printf("The Number is Prime.");
    }
    else{

    }
}
else{
     printf("The Number is Not Prime.");
}
}
else{
     printf("The Number is Not Prime.");
}
}