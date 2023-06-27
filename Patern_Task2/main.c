#include <stdio.h>
#include <stdlib.h>

unsigned int Row_Number;
unsigned int Repeating_Number;
unsigned int Repeating_Row;
int main(){
    printf("Enter the number of Rows:");
    scanf("%i",&Row_Number);
    for (Repeating_Row=0 ; Repeating_Row< Row_Number ; Repeating_Row++){
         if (Repeating_Row==1){
             printf("* ");
             printf("\t  ");
             printf("*");
         }
         else{
        for (Repeating_Number=0 ; Repeating_Number <5; Repeating_Number++)
            printf("* ");

         }
         printf("\n");

    }
}
