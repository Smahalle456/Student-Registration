#include"declaration.h"

struct student* reverse_list(struct student* ptr)
{

struct student *prev=NULL, *curr=NULL, *nnext=NULL;

nnext=ptr;

while(nnext)
{
prev=curr;
curr=nnext;
nnext=nnext->next;
curr->next=prev;

}

ptr=curr;
return ptr;

}
