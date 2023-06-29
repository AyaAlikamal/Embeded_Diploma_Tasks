#include <stdio.h>
 
unsigned int Number;

int main(){
printf("Enter the Number:");
scanf(" %i", &Number);    
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