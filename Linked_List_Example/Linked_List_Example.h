#include <stdio.h>
#include <stdlib.h>
#include "PlatForm_Types.h"
#ifndef _LINKED_LIST_EXAMPLE_H_
#define _LINKED_LIST_EXAMPLE_H_

typedef struct{
uint32 NodeData;
struct Node *NodeLink;
}Node;

void Inster_Node_AT_Begining(Node **List );
void Inster_Node_AT_End(Node **List );
void Inster_Node_After(Node **List );
void Delet_Node_AT_Begining(Node **List );
void Delet_Node(Node **List );
void Display_All(Node **List );
uint32 Get_Length(Node *List);

#endif