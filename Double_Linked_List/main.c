#include "Double_Linked_List.h"


Node *DLL_1 = NULL;
uint32 User_Data;
uint32 Position;

int main(){

printf("Please, Enter the Data you want to insert at the beginning: ");
scanf("%i", &User_Data);
Insert_Node_AT_Beginning(&DLL_1 , User_Data);
printf("Please, Enter the Data you want to insert at the end: ");
scanf("%i", &User_Data);
Insert_Node_AT_End(DLL_1 , User_Data);

printf("Please, Enter the Data you want to insert : ");
scanf("%i", &User_Data);
printf("Please, Enter the Position you want to insert after: ");
scanf("%i", &Position);
Insert_Node_After_Position(DLL_1, User_Data, Position);

printf("Please, Enter the Data you want to insert : ");
scanf("%i", &User_Data);
printf("Please, Enter the Position you want to insert Before: ");
scanf("%i", &Position);
Insert_Node_Before_Position(&DLL_1, User_Data, Position);

// Delete_Node_At_Beginning(&DLL_1);
// Delete_Node_At_End(DLL_1);
// printf("Please, Enter the Position you want to Delete: ");
// scanf("%i", &Position);
// Delete_Node_At_Specific_Position(DLL_1, Position);
Display_All_Nodes_Forward(DLL_1);
// Display_All_Nodes_Backward(DLL_1);
Reverse_All(&DLL_1);
Display_All_Nodes_Forward(DLL_1);
Swap_Two_Nodes(&DLL_1);
Display_All_Nodes_Forward(DLL_1);
}



