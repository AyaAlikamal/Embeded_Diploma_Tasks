#include <stdio.h>
#include <stdlib.h>
unsigned char Row_Number;
unsigned short int Repeating_Number;
unsigned short int Elements_Number;
int main()
{
   printf("Enter the number of rows: \n");
   scanf("%i",&Row_Number);
   for(Repeating_Number=0;Repeating_Number<=Row_Number;Repeating_Number++)
    { for (Elements_Number=1; Elements_Number<=Repeating_Number;Elements_Number++)
      {
       printf("* ",Elements_Number);
      }
      printf("\n");
   }

    return 0;
}
