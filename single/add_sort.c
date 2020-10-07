#include"declaration.h"

struct student* add_sort(struct student *ptr)
{
struct student *nu=NULL, *temp=NULL,*prev=NULL;

nu=calloc(1,sizeof(struct student));
if(nu==NULL){printf("\nnode not created\n");}

printf("enter the student data\n");

printf("\n Enter the name of student\n");
scanf("%s",nu->name);

printf("Enter the Roll number of Student\n");
scanf("%d", &nu->Roll_no);

if(ptr==NULL || (nu->Roll_no < ptr->Roll_no))
{
printf("\n#################1\n");
nu->next=ptr;
ptr=nu;
return ptr;
}
else
{
temp=ptr;

while(temp && (nu->Roll_no > temp->Roll_no))
{
printf("\n#################2\n");
prev=temp;
temp=temp->next;
}

if(temp==NULL)
{
printf("\n#################3\n");
prev->next=nu;
return ptr;
}

nu->next=temp;
prev->next=nu;
printf("\n#################4\n");
return ptr;
}
}
