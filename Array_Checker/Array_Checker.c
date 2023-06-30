#include <stdio.h>
#define Lenght 5
unsigned int Array[5]={0};

void checker(void);
int main(){
checker();
}
void checker(void){
unsigned short int counter = 0;
   printf("Enter the Elemnts of the Array: ");
   for(counter=0 ; counter < Lenght; counter++){
    scanf("%i", &Array[counter]);
    }
    for(counter=0 ; counter < 1 ; counter++){
     if(Array[counter] >Array[counter + 1]){
        if(Array[counter] >Array[counter + 2]){
            if(Array[counter] >Array[counter + 3]){
                if(Array[counter] >Array[counter + 4]){
                    printf("The Largest element in Array is[%i] = %i \n", (counter),Array[counter]);
                }
            }
        }
     }
    
    else if (Array[counter + 1] >Array[counter + 2]){
        if(Array[counter + 1] >Array[counter + 3]){
                if(Array[counter+ 1] >Array[counter + 4]){
                    printf("The Largest element in Array is[%i] = %i \n", (counter+ 1),Array[counter+ 1]);
                }
            }
    }
    else if(Array[counter + 2] >Array[counter + 3]){
        if(Array[counter+ 2] >Array[counter + 4]){
                    printf("The Largest element in Array is[%i] = %i \n", (counter + 2),Array[counter+2]);
                }
    }
    else if(Array[counter + 3] >Array[counter + 4]){
         printf("The Largest element in Array is[%i] = %i \n", (counter+3),Array[counter+3]);
    }
    else{
         printf("The Largest element in Array is[%i] = %i \n", (counter+4),Array[counter+4]);
    }
}
}
