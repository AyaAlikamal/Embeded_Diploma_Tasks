#include <stdio.h>

unsigned int Row_Number;
unsigned int Repeating_Times;
unsigned int Repeating_Elements;

int main(){
printf("Enter the Number of Rows:");
scanf(" %i", &Row_Number);


for (Repeating_Times = 0 ; Repeating_Times <Row_Number ; Repeating_Times++){
 for (Repeating_Elements=1 ; Repeating_Elements<= Repeating_Times ; Repeating_Elements++){
    printf("%i ", Repeating_Elements );
 }
printf("\n");

}
}