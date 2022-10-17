//Queue by Linked List implementation

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

//Node structure
struct Node                               
{
  int data;
  struct Node* link;

}*front,*rear,*p,*temp;

//Function Declaration
void insert(int x);
void pop();
void search(int x);
void count();
void display();

//Main
void main()
{
  int ch,n;
  front = NULL;   //Initialising front and rear to NULL
  rear = NULL;
  clrscr();

  do
  {
    clrscr();
    //Choices
    printf("\n\n\t\tEnter your choice: ");
    printf("\n\n\t\tPress 1 to insert ");
    printf("\n\n\t\tPress 2 to delete");
    printf("\n\n\t\tPress 3 to search");
    printf("\n\n\t\tPress 4 to count");
    printf("\n\n\t\tPress 5 to display\n\n");
    scanf("%d",&ch);