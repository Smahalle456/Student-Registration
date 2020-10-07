#include"declaration.h"

struct student* delete_nth(struct student *ptr)
{

struct student *prev=NULL, *temp=NULL;
int pos=0,count=0, des;


printf("\n Enter the position that you want to delete from last\n");
scanf("%d", &pos);


temp=ptr;


while(temp)
{
count++;
//prev=temp;
temp=temp->next;
}

des=count-pos;
count=0;
temp=ptr;
while(count!=des)
{
prev=temp;
temp=temp->next;
count++;

}

prev->next=temp->next;
free(temp);

return ptr;

}
