#include"declaration.h"

struct student* Delete_data(struct student *ptr)
{
struct student *temp=NULL,  *prev=NULL;
int data;


printf("\nEnter the roll no you want to delete\n");
scanf("%d",&data);

if(ptr==NULL)
{
printf("\nlist is empty\n");
return ptr;
}

temp=ptr;
while(temp && temp->Roll_no != data)
{
prev=temp;
temp=temp->next;
}

if(temp->Roll_no == data)
{
prev->next=temp->next;
free(temp);
return ptr;
}
else
{
printf("\n Roll No not found\n");
}


}
