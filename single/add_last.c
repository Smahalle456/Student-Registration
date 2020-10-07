#include"declaration.h"

struct student* Add_last(struct student *ptr)
{
struct student *temp=NULL, *nu=NULL;

nu=calloc(1,sizeof(struct student));
if(nu==NULL){printf("\nNode not created\n");}

printf("enter the Student Data\n");

printf("enter the name of sudent\n");
scanf("%s",nu->name);

printf("enter the roll No of the student\n");
scanf("%d",&nu->Roll_no);

if(ptr==NULL)
{
ptr= nu;
return ptr;
}

temp=ptr;
while(temp->next)
{
temp=temp->next;
}

temp->next=nu;

return ptr;
}
