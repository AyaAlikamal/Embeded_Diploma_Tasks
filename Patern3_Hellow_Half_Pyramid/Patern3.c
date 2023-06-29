#include <stdio.h>

unsigned int Row_Number;
unsigned int Repeating_Times;
unsigned int Repeating_Elements;

int main(){
printf("Enter the Number of Rows:");
scanf(" %i", &Row_Number);


for (Repeating_Times = 0 ; Repeating_Times <Row_Number ; Repeating_Times++){
 for (Repeating_Elements=1 ; Repeating_Elements<= Repeating_Times ; Repeating_Elements++){
    if (Repeating_Times==3){
     printf("%i",Repeating_Elements);
     printf("   ");
     Repeating_Elements+=Repeating_Elements;
    }
    else if(Repeating_Times==4){
     printf("%i",Repeating_Elements);
     printf("   ");
     printf("   ");
     Repeating_Elements+=Repeating_Elements;
    }
    else{
    printf("%i ", Repeating_Elements );
 }}
printf("\n");

}
}