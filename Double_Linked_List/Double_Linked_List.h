#ifndef _DOUBLE_LINKED_LIST_H_
#define _DOUBLE_LINKED_LIST_H_
#include <stdio.h>
#include <stdlib.h>
#include "PlatForm_Types.h"

typedef struct 
{
uint32 NodeData;
struct Node *RightNodeLink;
struct Node *LeftNodeLink;
}Node;

void Insert_Node_AT_Beginning(Node **List, uint32 Data);
void Insert_Node_AT_End( Node *List, uint32 Data);
void Insert_Node_After_Position( Node *List, uint32 Data, uint32 Position);
void Insert_Node_Before_Position( Node **List, uint32 Data, uint32 Position);
void Delete_Node_At_Beginning(Node **List);
void Delete_Node_At_End(Node *List);
// void Delete_Node_At_Specific_Position(Node *List, uint32 Position);
void Display_All_Nodes_Forward(Node *List);
void Display_All_Nodes_Backward(Node *List);
void Reverse_All(Node **List);
void Swap_Two_Nodes( Node **List);
#endif