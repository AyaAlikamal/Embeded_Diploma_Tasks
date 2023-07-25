#include "Linked_List_Example.h"

Node *ListHead = NULL;
int main(){
uint32 UserChoice = 0;
uint32 ListLength = 0;
 printf("-> Hello to Single Linked List \n");
    while(1){
        printf("\n");
        printf("===============================\n");
        printf("-> 1) Insert_Node_At_Beginning \n");
        printf("-> 2) Insert_Node_At_End \n");
        printf("-> 3) Insert_Node_After \n");
        printf("-> 4) Delete_Node_At_Beginning \n");
        printf("-> 5) Delete_Node \n");
        printf("-> 6) Display_All_Nodes \n");
        printf("-> 7) Get_Length \n");
        printf("-> 8) Quit from application \n");
        printf("===============================\n");

        printf("\n");
        printf("UserChoice : ");
        scanf("%i", &UserChoice);

switch(UserChoice){
            case 1:
                Inster_Node_AT_Begining(&ListHead);
            break;
            case 2:
                Inster_Node_AT_End(&ListHead);
            break;
            case 3:
                Inster_Node_After(ListHead);
            break;
            case 4:
                Delet_Node_AT_Begining(&ListHead);
            break;
            case 5:
                Delet_Node(ListHead);
            break;
            case 6:
                Display_All(ListHead);
            break;
            case 7:
                ListLength = Get_Length(ListHead);
                printf("List Length : << %i >> Nodes\n", ListLength);
            break;
            case 8:
                printf("Quit from application \n");
                exit(1);
            break;
            default:
                printf("User Choice out of range !!\n");
            break;
        }
    }
    return 0;
}