#include <stdio.h>

typedef struct 
{
    char student_name[20];
    unsigned int student_ID;
    float student_degree;
}student_ty;

student_ty aya;

void Get_Data( student_ty *aya);
void print_Data(student_ty *ptr);

int main(){
Get_Data(&(aya));
print_Data(&(aya));
return 0;
}
void Get_Data(student_ty *ptr){
printf("Enter Your Name:");
gets( &(ptr->student_name));
printf("\nEnter Your ID:");
scanf( "%i", &(ptr->student_ID));
printf("\nEnter Your Degree:");
scanf( "%f", &(ptr->student_degree));
}

void print_Data(student_ty *ptr){
    printf("The Student Name is : %s",ptr->student_name);
    printf("\nThe Student ID is : %i", ptr->student_ID);
    printf("\nThe Student Degree is : %.02f", ptr->student_degree);
}