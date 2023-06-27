#include <stdio.h>
#include <stdlib.h>
unsigned int Rows_Number;
unsigned int Repeating_Rows;
unsigned int Repeating_Times;

int main()
{
    printf("Enter the number of Rows:");
    scanf("%i",&Rows_Number);
    for (Repeating_Rows=0 ; Repeating_Rows <Rows_Number; Repeating_Rows++)
    {
        for(Repeating_Times=0; Repeating_Times<5 ; Repeating_Times++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
