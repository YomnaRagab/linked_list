#include <stdlib.h>
#include "LIB/types.h"
#include "linked_list_proto.h"
void insert(strnode* ptr1,strnode* ptr2)
{
    strnode*ptr=(strnode*)malloc(sizeof(strnode)) ;//creat new node and get the the address of it then cast it to struct type
    ptr->nxt=ptr2; //the next of the new node is the second pointer
    ptr1->nxt=ptr; //the next of the first node is the new pointer
}
void main(void)
{
  //
}
