#include"declaration.h"


int main()
{
struct student *head=NULL;
int choice;

while(1)
{
printf("\n**********Select from the below option***********\n\n");
printf("\n 1- Add at first\n 2-Delete 1st\n 3-Delete last\n 4-Add at last\n 5-Display data\n 6-Add_sort\n 7-Delete_Data\n 8-Delete_nth_last\n 9-reverse_list\n");

scanf("%d",&choice);

printf("%d",choice);

switch(choice)
{

case 1:head=Add_first(head);
       break;
case 2:head=Delete_first(head);
       //Display(head);
       break;
case 3:head=Delete_last(head);
       //Display(head);
       break;
case 4:head=Add_last(head);
       //Display(head);
       break;
case 5:Display(head);
       break;
case 6:head=add_sort(head);
       printf("##########main\n");
       break;
case 7:head=Delete_data(head);
       break;
case 8:head=delete_nth(head);
	break;
case 9:head=reverse_list(head);
	break;
default:printf("Wrong Choice\n"); 
        break;

}
}
}
