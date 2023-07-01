#include <stdio.h>

unsigned int Number;
void Squaring_Function(unsigned int *Num1);
void Qubing_Function(unsigned int *Num2);
int main(){
while(1) {  
printf("Enterthe Number you want it is square : ");    
scanf("%i/n", &Number);
printf("The Square Value is : %i\n", Number);
Squaring_Function(&Number);
printf("The Square Value is : %i\n", Number);

printf("Enterthe Number you want it is qube: ");    
scanf("%i/n", &Number);
printf("The Square Value is : %i\n", Number);
Qubing_Function(&Number);
printf("The Square Value is : %i\n", Number);
}
}
void Squaring_Function(unsigned int *Num1){
 *Num1 *= *Num1 ;
}
void Qubing_Function(unsigned int *Num2){
    *Num2 = *Num2 * *Num2 * *Num2;
}
