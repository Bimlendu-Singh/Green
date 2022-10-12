//Circular Linked List

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct Node                                   
{
  int data;
  struct Node *link;
}*p,*start,*temp;

//Declaring function
void insert(int x);
void display();
void search(int x);
void count();
void delfirst();
void dellast();
