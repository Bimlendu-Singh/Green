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