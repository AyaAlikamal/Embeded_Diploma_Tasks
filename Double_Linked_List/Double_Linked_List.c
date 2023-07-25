#include "Double_Linked_List.h"

#define DELET_NODE_AT_BEGINNING

void Insert_Node_AT_Beginning( Node **List, uint32 Data){
Node *TempNode = NULL;

TempNode = (Node *)malloc(sizeof(Node));
if(TempNode != NULL){
    TempNode->NodeData = Data;
    if (*List == NULL)
    {
        TempNode->LeftNodeLink = NULL;
        TempNode->RightNodeLink = NULL;
        (*List) = TempNode;
    }
    else{
        TempNode->LeftNodeLink = NULL;
        TempNode->RightNodeLink = (*List);
        (*List)->LeftNodeLink = TempNode;
        (*List) = TempNode;
    }
    
}
else{
    printf("Can't allocate the new node!!");
}
}


void Insert_Node_AT_End( Node *List, uint32 Data){
Node *TempNode = NULL;
Node *NodeListCounter = NULL;

TempNode = (Node *)malloc(sizeof(Node));

if(TempNode != NULL){
TempNode->NodeData = Data;
TempNode->RightNodeLink = NULL;
NodeListCounter= List;
while(NodeListCounter->RightNodeLink != NULL){
    NodeListCounter= NodeListCounter->RightNodeLink;
}
TempNode->LeftNodeLink = NodeListCounter;
NodeListCounter->RightNodeLink = TempNode;
}
else{
    printf("Can't allocate the new node!!"); 
}
}

void Insert_Node_After_Position( Node *List, uint32 Data, uint32 Position){

Node *TempNode = NULL;
Node *NodeCounter_1 = NULL;
Node *NodeCounter_2 = NULL;

NodeCounter_1 = List;
while (Position != 1)
{
    NodeCounter_1 = NodeCounter_1->RightNodeLink;
    Position--;
}
TempNode = (Node *)malloc(sizeof(Node));
if(TempNode != NULL){
    TempNode->NodeData = Data;
    if (NodeCounter_1->RightNodeLink == NULL)
    {
        NodeCounter_1->RightNodeLink = TempNode;
        TempNode->LeftNodeLink = NodeCounter_1;
        TempNode->RightNodeLink = NULL;
    }
    else{
        NodeCounter_2 = NodeCounter_1->RightNodeLink;
        NodeCounter_1->RightNodeLink = TempNode;
        NodeCounter_2->LeftNodeLink = TempNode;
        TempNode->LeftNodeLink = NodeCounter_1;
        TempNode->RightNodeLink = NodeCounter_2;
    }
}
else{
    printf("Can't allocate the new node!!");  
}
}
void Insert_Node_Before_Position( Node **List, uint32 Data, uint32 Position){
Node *TempNode = NULL;
Node *Node_Counter_1 = NULL;
Node *Node_Counter_2 = NULL;
uint32 Node_Position = Position;

Node_Counter_1 = (*List);
while(Node_Position > Position-1){
    Node_Counter_1 = Node_Counter_1->RightNodeLink;
    Node_Position--;
}

TempNode = (Node *)malloc(sizeof(Node));
if(TempNode != NULL){
    TempNode->NodeData = Data;
    if(Position == 1){
        TempNode->LeftNodeLink = NULL;
        TempNode->RightNodeLink = *List;
        (*List)->LeftNodeLink = TempNode;
        (*List)= TempNode;
    }
    else{
        Node_Counter_2= Node_Counter_1->RightNodeLink;
        Node_Counter_1->RightNodeLink = TempNode;
        Node_Counter_2->LeftNodeLink = TempNode;
        TempNode->LeftNodeLink = Node_Counter_1;
        TempNode->RightNodeLink = Node_Counter_2;
    }
}
else{
      printf("Can't allocate the new node!!");   
}
}

void Delete_Node_At_Beginning(Node **List){
Node *TempNode = *List;
#ifdef DELET_NODE_AT_BEGINNING
*List = (*List)->RightNodeLink;
(*List)->LeftNodeLink = NULL;
free(TempNode);
TempNode = NULL;

#else
*List = (*List)->RightNodeLink;
free((*List)->LeftNodeLink);
(*List)->LeftNodeLink = NULL;

#endif
}

void Delete_Node_At_End(Node *List){
   Node *NodeCounter_1 = NULL;
   Node *NodeCounter_2 = NULL;
   NodeCounter_1 = List;
   while(NodeCounter_1->RightNodeLink != NULL){
    NodeCounter_1 = NodeCounter_1->RightNodeLink;
   }
   NodeCounter_2 = NodeCounter_1->LeftNodeLink;
   NodeCounter_2->RightNodeLink = NULL;
   free(NodeCounter_1);
   NodeCounter_1 = NULL;
}


// void Delete_Node_At_Specific_Position(Node *List, uint32 Position){
// Node *Node_Counter_1 = NULL;
// Node *Node_Counter_2 = NULL;
// uint32 NodePosition = Position;
// if(NodePosition == 1){
//     printf("Please use the Delete_Node_At_Beginning!!\n");
// }
// else{
//     Node_Counter_1 = List;
//     while(Node_Counter_1 > 1){
//         Node_Counter_1 = Node_Counter_1->RightNodeLink;
//         NodePosition--;
//     }
//     Node_Counter_2 = Node_Counter_1->LeftNodeLink;
//     Node_Counter_2->RightNodeLink = Node_Counter_1->RightNodeLink;
//     (Node_Counter_1->RightNodeLink)->LeftNodeLink = Node_Counter_2;
//     free(Node_Counter_1);
//     Node_Counter_1 = NULL;
// }
// }

void Display_All_Nodes_Forward(Node *List){

Node *TempNode = List;
printf("\n Travers in Forward Direction==> ");
printf("Data: ");
printf("%d ->", TempNode->NodeData);
while (TempNode->RightNodeLink != NULL)
{
     TempNode = TempNode->RightNodeLink;
     printf("%d ->", TempNode->NodeData);
}
if (TempNode->RightNodeLink == NULL)
{
    printf("NULL");
}
printf("\n");
}

void Display_All_Nodes_Backward(Node *List){
Node *TempNode = List;
printf("\n Travers in Backward Direction==> ");
printf("Data: ");

while (TempNode->RightNodeLink != NULL)
{
     TempNode = TempNode->RightNodeLink;
}
while (TempNode != NULL)
{
    printf("%d ->", TempNode->NodeData);
    TempNode = TempNode->LeftNodeLink;
}
if (TempNode== NULL)
{
    printf("NULL");
}
printf("\n");
}

void Reverse_All(Node **List){
Node *TempNode = NULL;
Node *CurrentNode = *List;
while (CurrentNode != NULL)
{
    TempNode = CurrentNode->LeftNodeLink;
    CurrentNode->LeftNodeLink = CurrentNode->RightNodeLink;
    CurrentNode->RightNodeLink = TempNode;
    CurrentNode = CurrentNode->LeftNodeLink;
}

if( TempNode !=  NULL)
{
    *List = TempNode->LeftNodeLink;
}
}
void Swap_Two_Nodes(Node **List){
Node *TemoNode = NULL;
Node *NodeCount_1 = NULL;
Node *NodeCount_2 = NULL;

TemoNode->LeftNodeLink = (*List)->RightNodeLink;
TemoNode->NodeData = NodeCount_1->NodeData;
NodeCount_1->NodeData = NodeCount_2->NodeData;
NodeCount_2->NodeData = TemoNode->NodeData;
}
