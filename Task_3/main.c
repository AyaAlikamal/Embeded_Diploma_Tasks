#include <stdio.h>
#include <stdlib.h>
unsigned char Row_Number;
unsigned short int Repeating_Number;
unsigned short int Elements_Number;
unsigned short int output;
int main()
{
   printf("Enter the number of rows: \n");
   scanf("%i",&Row_Number);
   for(Repeating_Number=Row_Number;Repeating_Number>0;Repeating_Number--)
    {

      for(output=1;output<=Repeating_Number;output++)
          {
                printf("%i ",output);
          }
      printf("\n");
   }

    return 0;
}
