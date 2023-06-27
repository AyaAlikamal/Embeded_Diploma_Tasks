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
   for(Repeating_Number=0;Repeating_Number<=Row_Number;Repeating_Number++)
    {
        switch(Repeating_Number)
        {
            case 1:
            printf("A ");
            printf("\n");
            break;
            case 2:
            for(output=0;output<2;output++){
            printf("B ");}
             printf("\n");
            break;
            case 3:
            for(output=0;output<3;output++){
            printf("C ");}
            printf("\n");
            break;
            case 4:
            for(output=0;output<4;output++){
            printf("D ");}
            printf("\n");
            break;
            case 5:
            for(output=0;output<5;output++){
            printf("E ");}
            printf("\n");
            break;

        }
    }


    return 0;
}
