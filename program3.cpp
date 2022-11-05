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

    switch(ch)
    {
      //Insertion Choice
      case 1: printf("Enter the value to insert\n");
	      scanf("%d",&n);
	      insert(n);
	      break;

      //Deletion
      case 2: pop();
	      break;

      //Element search operation
      case 3: printf("Enter the vlaue to be search\n");
	      scanf("%d",&n);
	      search(n);
	      break;

      //Counting of elements in queue
      case 4: count();
	      break;

      //Display of all elements in queue
      case 5: display();
	      break;

      default: printf("\nInvalid choice");
    }
    printf("\nPress 0 to continue...");
    scanf("%d",&ch);

  }while(ch==0);
}
 //Insert Function
 void insert(int x)
 {
    if(rear==NULL)
    {
      rear = (struct Node*)malloc(sizeof(struct Node));
      rear->data = x;
      rear->link = NULL;
      front = rear;
    }
    else
    {
      temp = (struct Node*)malloc(sizeof(struct Node));
      temp->data = x;
      temp->link = NULL;
      rear->link = temp;
      rear = temp;
    }
    printf("Element inserted...");
 }
 //Delete function
 void pop()
 {
   if(front==NULL)
     printf("No list is present!!!");

   else if(front==rear&&rear!=NULL)    //when front and rear both pointing
   {                                   //same node and we have to delete
     temp = front;                     //that node
     free(temp);
     front=NULL;
     rear=NULL;
     printf("\nNode is delted...\n");
   }
   else
   {
     temp = front;
     front = front->link;
     free(temp);
     printf("\nNode is delted...\n");
   }
 }
 //Search function
 void search(int x)
 {
   int flag = 0 ;

   if(front==NULL)
    {
      printf("No list is present!!!");
    }
   else
   {
     p = front;

     while(p!=NULL)
     {
       if(p->data == x)
       {

	       flag++;
	       printf("%dtest",flag);
       }

       p=p->link;
     }
   }

    if(flag)
     printf("\nElements found %d number of times", flag);
    else
     printf("\nElement not found\n");
 }
 //Count function
 void count()
 {
  int c = 0;

  if(front==NULL)
    printf("No list present");

  else
  {
    p = front;

    while(p!=NULL)
    {
      c++;
      p = p->link;
    }
    printf("%d elements are in queue", c);
  }
 }
 //Display function
 void display()
 {
   if(front==NULL)
    printf("No list present");

   else
   {
     p = front;

     printf("Elements are : ");
     while(p!=NULL)
     {
       printf(" %d\t",p->data);
       p = p->link;
     }
   }
 }