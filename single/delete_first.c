#include"declaration.h"

struct student* Delete_first(struct student *ptr)
{
struct student *temp;

if(ptr==NULL)
{
printf("linklist is empty\n");
}
else
{
temp=ptr;

free(ptr);
}

return (temp->next);
}
