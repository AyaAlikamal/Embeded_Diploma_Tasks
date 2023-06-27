#include <stdio.h>
#include <stdlib.h>
unsigned char Row_Number;
unsigned short int Repeating_Number;
unsigned short int Output_Number;
unsigned short int output;
int main()
{
   printf("Enter the number of rows: \n");
   scanf("%i",&Row_Number);
   for(Repeating_Number=1;Repeating_Number<Row_Number;Repeating_Number++){
       for(output=1;output<=Repeating_Number;output++){
           Output_Number+=1;
      printf("%i ",Output_Number);
           }
         printf("\n");
   }
    return 0;
}
