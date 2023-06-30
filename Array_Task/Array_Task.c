#include <stdio.h>

unsigned int Password_array[5]= {'a','b','v','c','n'}; 
unsigned short int Index; 
unsigned short int Indicator; 
unsigned int Enter_Password(void);
unsigned int Print_Data(unsigned short int data);

int main(){
Index = Enter_Password();
Indicator = Print_Data(Index);
while(1){
if(Indicator == 1){
   Index = Enter_Password(); 
   Indicator = Print_Data(Index);
   
}
else{
    break;
}}
    return 0;
}

unsigned int Enter_Password(void){
unsigned short int Flag = 0 ;
unsigned char User_Array[5]={0};

    printf("Please, Enter the Password:");
for (Index =0; Index < 5; Index++)
{
scanf(" %c",& User_Array[Index]); 
   
fflush(User_Array);
}

for(Index=0 ; Index < 5 ; Index++){
  if(User_Array[Index]==Password_array[Index]){
          Flag = 1;
    }
  else{
        Flag = 0;
        break;
    }
} 
return Flag;
}
unsigned int Print_Data(unsigned short int data){
    unsigned short int indecator = 0; 
    if(data == 1){
        printf("The Password is Right: welcome\n");
        indecator = 0;
    }
    else{
         printf("The Password is Wrong, Please, try again\n");
           indecator = 1;
    }
    return indecator;
}
