//Linked list implementation of stack.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

//Node contating data part and link part
struct Node
{
  int data;
  struct Node *link;

} *start,*p,*temp;

//Declaring function
void insert(int x);
void pop();
void search(int x);
void count();
void display();

void main()
{
  int ch,n;
  start = NULL;
  clrscr();

  //Menu driven
  do
  {
   clrscr();
   printf("\n\n\t\tEnter your choice :");
   printf("\n\n\t\tPress 1 to insert ");
   printf("\n\n\t\tPress 2 to delete");
   printf("\n\n\t\tPress 3 to search");
   printf("\n\n\t\tPress 4 to count");
   printf("\n\n\t\tPress 5 to display");
   scanf("%d",&ch);