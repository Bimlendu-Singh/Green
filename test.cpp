//Circular Linked List

#include<iostream>
using namespace std;

struct Node                                   //B's code 24jan22
{
  int data;
  struct Node *link;
}*p,*start,*temp;

void insert(int x);
void display();
void search(int x);
void count();
void delfirst();
void dellast();

//Main
int main()
{
  int ch,n;
  

  do
  {
    
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

  return 0;
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
 //Display function
 void display()
  {
   if(start==NULL)
    printf("\nNo list present\n");

   else
   {
     p = start;

     printf("\nElements are %d ",p->data);
     p = p->link;

     while(p!=start)
     {
       printf("%d ",p->data);
       p = p->link;
     }
   }
 }
 void search(int x)
 {
   int flag = 0;

   if(start==NULL)
    printf("\nNo list present\n");
   else
   {
     p = start;

     if(p->data==x)
       flag++;
     p = p->link;

     while(p!=start)
     {
       if(p->data==x)
	 flag++;
       p = p->link;
     }
   }
   printf("Element present %d number of times.. " , flag);
 }
 void count()
 {
   int c = 0;

   if(start==NULL)
    printf("\nNo list present\n");
   else
   {
     p=start;
     c++;
     p=p->link;

     while(p!=start)
     {
	c++;
	p = p->link;
     }
     printf("%d Element are in list",c);
   }
 }
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
 //v
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