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

//Main
void main()
{
  int ch,n;
  clrscr();

  do
  {
    clrscr();
    //Choices
    printf("\n\nEnter your choice: \n");
    printf("\nPress 1 to insert \n");
    printf("Press 2 to display\n");
    printf("Press 3 to search\n");
    printf("Press 4 to count\n");
    printf("Press 5 to delfirst\n");
    printf("Press 6 to dellast\n");

    scanf("%d",&ch);

    switch(ch)
    {
      //Insertion Choice
      case 1: printf("Enter the value to insert\n");
	      scanf("%d",&n);
	      insert(n);
	      break;

      //Deletion from first
      case 2: display();
	      break;

      case 3: printf("Enter the value to search in the list\n");
	      scanf("%d",&n);
	      search(n);
	      break;

      case 4: count();
	      break;

      case 5: delfirst();
	      break;

      case 6: dellast();
	      break;

      default: printf("\nInvalid choice");
    }
    printf("\nPress 0 to continue...");
    scanf("%d",&ch);

  }while(ch==0);
}
 //Insert function
 void insert(int x)
  {
    if(start==NULL)
    {
      start = (struct Node*)malloc(sizeof(struct Node));
      start->data = x;
      start->link = start;
    }
    else
    {
      p = start;

      while(p->link!=start)
      {
       p = p->link;
      }
      temp = (struct Node*)malloc(sizeof(struct Node));
      p->link = temp;
      temp->data = x;
      temp->link = start;
    }
    printf("\nNode inserted\n");
  }