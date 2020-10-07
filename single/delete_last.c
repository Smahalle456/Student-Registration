#include"declaration.h"

struct student* Delete_last(struct student *ptr)
{
struct student *temp,*prev;
temp=ptr;

if(ptr==NULL)
{
printf("list is empty");
return(0);
}
else
{
while(temp->next)
{
prev=temp;
temp=temp->next;
}
prev->next=NULL;

free(temp);

return ptr;

}
}
