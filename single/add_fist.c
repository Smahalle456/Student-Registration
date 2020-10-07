#include"declaration.h"

struct student* Add_first(struct student *ptr)
{
struct student *temp;

temp= calloc(1, sizeof(struct student));

if(temp==NULL)
{
printf("Node is not created\n");

}
printf("Enter the student Data\n");

printf("enter the name of student\n");
scanf("%s",temp->name);

printf("Enter the Roll noumber of student\n");
scanf("%d",&temp->Roll_no);

printf("error1\n");

temp->next=ptr;
ptr=temp;


return ptr;

}
