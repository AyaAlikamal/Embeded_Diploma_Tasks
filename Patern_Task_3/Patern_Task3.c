#include <stdio.h>
#include <stdlib.h>

unsigned int Rows_Number;
unsigned int Repeating_Times;
unsigned int Row_Repeating;

int main(){

printf("Enter The Number of Rows:");
scanf("%i",&Rows_Number);

for (Row_Repeating=Rows_Number ; Row_Repeating >0; Row_Repeating--)
{
   for (Repeating_Times=0; Repeating_Times <Row_Repeating;Repeating_Times++)
   {
    switch (Repeating_Times)
    {
        case 5:
        printf("*");
        printf("  \t  ");
        printf("*");
        break;
    
        case 4:
        printf("*");
        printf("\t");
        printf("*");
        break;
    
        case 3:
        printf("*");
        printf("   ");
        printf("*");
        break;

        default:
        printf("* ");
         break;
    }
       
   }
 printf("\n");
}


    return 0;
}
