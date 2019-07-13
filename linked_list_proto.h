#ifndef linked_list_proto
#define  linked_list_proto
#include "LIB/types.h"
struct node
{
  u16 data;
  struct node *nxt;
};
typedef struct node strnode;
void insert(strnode*,strnode*);
/*
    return:none
    argument:two pointers to struct
    function:insert new node between other two nodes.
*/

#endif
