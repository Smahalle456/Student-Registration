#include<stdio.h>
#include<stdlib.h>

struct student{

char name[20];
int Roll_no;
struct student *next;

};

struct student* Add_first(struct student *ptr);
void Display(struct student *ptr);
struct student* Add_last(struct student *ptr);
struct student* Delete_last(struct student *ptr);
struct student* Delete_first(struct student *ptr);
struct student* Add_last(struct student *prt);
struct student* add_sort(struct student *ptr);
struct student* Delete_data(struct student *ptr);
struct student* delete_nth(struct student *ptr);
struct student* reverse_list(struct student* ptr);


