#include "Linked_List_Example.h"

void Inster_Node_AT_Begining(Node **List ){
Node *TempNode = NULL;

TempNode = (Node *)malloc(sizeof(Node));
if(TempNode !=NULL ){
    printf("Enter the Node Data: ");
    scanf("%i", &TempNode->NodeData);
    if(*List == NULL){
        TempNode->NodeLink = NULL;
        *List = TempNode;
    }
    else{
        TempNode->NodeLink = *List;
        *List = TempNode;
    }
}
else{
}
}

void Inster_Node_AT_End(Node **List ){
 Node *TempNode = NULL;
 Node *LastNode = NULL;

 TempNode = (Node *)malloc(sizeof(Node));
 if(TempNode != NULL){
    printf("Enter Node Data: ");
    scanf("%i", &TempNode->NodeData);
    TempNode->NodeLink = NULL;
    if(*List == NULL){
        *List = TempNode;
    }
    else{
        LastNode = *List;
        while(LastNode->NodeLink != NULL){
            LastNode = LastNode->NodeLink;
        }
        LastNode->NodeLink = TempNode;
    }
 }
else{
}
}

void Inster_Node_After(Node **List ){
Node *TempNode = NULL;
Node *NodeListCounter = NULL;
uint32 NodePosition = 0;
uint32 ListLength = 0;
uint32 NodeCounter = 1;
printf("Enter Node Position (First node is position = 1):");
scanf("%i", &NodePosition);

ListLength = Get_Length(List);
if(NodePosition > ListLength){
    printf("Invalid Node Position -> List has (%i) Node \n ", ListLength);
}
else{
    NodeListCounter = List;
    while(NodeCounter < NodePosition){
        NodeCounter++;
        NodeListCounter = NodeListCounter->NodeLink;
    }
    TempNode = (Node *)malloc(sizeof(Node));
    if(TempNode != NULL){
        printf("Enter Node Data: ");
        scanf("%i", &TempNode->NodeData);
        TempNode->NodeLink = NodeListCounter->NodeLink;
        NodeListCounter->NodeLink = TempNode;
    }
    else{
    }
}
}
void Delet_Node_AT_Begining(Node **List ){
Node *TempNode = *List;
uint32 ListLength = 0;

ListLength = Get_Length(*List);
if(ListLength == 0 ){
    printf("List is empty, Nothing to be deleted !!\n");
}
else{
    *List = TempNode->NodeLink;
    TempNode->NodeLink = NULL;
    free(TempNode);
}
}

void Delet_Node(Node **List ){
Node *NodeListCounter = List;
Node *NextNode = List;
uint32 NodePostion = 0;
uint32 ListLength = 0;
uint32 NodeCounter = 1;

printf("Enter the Node Position (First node is position = 1): ");
scanf("%i", &NodePostion);
ListLength = Get_Length(List);
if((NodePostion > ListLength ) || (ListLength == 1)){
    printf("Please Use Delete_Node_AT_Beginning!! \n");
}
else{
    while(NodeCounter < (NodePostion - 1)){
        NodeCounter++;
        NodeListCounter = NodeListCounter->NodeLink;
    }
    NextNode = NodeListCounter->NodeLink;
    NodeListCounter->NodeLink = NextNode->NodeLink;
    free(NextNode);
}
}

void Display_All(Node **List ){
    Node *TempNode = List;
    printf("Node Value : ");
    if(TempNode == NULL){
        printf("List is empty!!\n");
    }
    else{
        while(TempNode != NULL){
            printf("%i -> ",TempNode->NodeData );
            TempNode = TempNode->NodeLink;
        }
        if(TempNode == NULL){
            printf("NULL \n");
        }
    }
}

uint32 Get_Length(Node *List){
Node *TempNode = List;
uint32 NodeCount = 0;
while(TempNode != NULL){
    NodeCount++;
    TempNode = TempNode->NodeLink;
}
return NodeCount;
}



