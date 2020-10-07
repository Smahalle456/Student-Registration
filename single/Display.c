#include"declaration.h"

void Display(struct student *ptr)
{

printf("\nCheck\n\n");
if(ptr==NULL)
{
printf("\nCheck__2\n\n");
printf("List is empty\n");
}

while(ptr)
{
printf("Name of Student--> %s \n", ptr->name);
printf("Roll No of student--> %d \n\n",ptr->Roll_no);

ptr=ptr->next;
}

}
