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

//Function for delete from last
 void dellast()
 {
   if(start==NULL)
     printf("\nNo list is present\n");

   else if(start->link==start)
   {
     free(start);
     start = NULL;
     printf("\nNode is deleted\n");
   }

   else
   {
     p=start;

     while(p->link->link!=start)
	    p=p->link;

     temp = p->link;
     free(temp);
     p->link = start;
     printf("\nNode is deleted\n");
   }
 }

 //Function to delete from first
 void delfirst()
 {
    if(start==NULL)
     printf("\nNo list is present\n");

    else if(start->link==start)
    {
      free(start);
      start=NULL;
      printf("\nNode is deleted\n");
    }

    else
    {
      p = start;
      while(p->link!=start)
	    p=p->link;

      temp = start;
      start = start->link;
      p->link = start;
      free(temp);
      printf("\nNode is deleted\n");
    }
 }