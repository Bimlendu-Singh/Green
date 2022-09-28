//Queue by array representation! Also dequeue..

#include<stdio.h>
#include<conio.h>

//Macro, we can change or create size of array by this
#define SIZE 5

//Declaring all the function			  //B's Code 13jan22
void insertRear(int x);                       //Modified to dequeue 9feb22
void delFront();
void delRear();
void search(int x);
void count();
void display();

//Structure of queue
struct Queue
{
  int arr[SIZE];
  int front,rear;
}q;

//Main function
void main()
{
  int ch,n;
  q.front=0;     //Intialising front to 0 and rear to -1
  q.rear=-1;

  clrscr();

  do
  {
    clrscr();

    //Menu driven choices
    printf("\nEnter your choice: \n");
    printf("\nPress 1 to insert an element from front...\n");
    printf("\nPress 2 to insert an element from rear...\n");
    printf("\nPress 3 to delete from front...\n");
    printf("\nPress 4 to delete from rear...\n");
    printf("\nPress 5 to search an element...\n");
    printf("\nPress 6 to count total element in queue...\n");
    printf("\nPress 7 to display all element in queue...\n");
    scanf("%d",&ch);

    switch(ch)
    {
      //Insert case
      case 1: printf("\nEnter the number : ");
	      scanf("%d",&n);
	      insertFront(n);
	      break;

      case 2: printf("\nEnter the number : ");
	      scanf("%d",&n);
	      insertRear(n);
	      break;

      //Delete case
      case 3: delFront();
	      break;

      case 4: delRear();
	      break;

      //Search case
      case 5: printf("\nEnter the number to search in queue : ");
	      scanf("%d",&n);
	      search(n);
	      break;

      //Count case
      case 6: count();
	      break;

      //Display case
      case 7: display();
	      break;

      //Invalid Choice!
      default: printf("\nYou have entered wrong choice!!!");
    }

    printf("\nPress 0 to continue...");
    scanf("%d",&ch);

  }while(ch==0);
}

 //Insert function
 void insertRear(int x)
 {
   if(q.rear==SIZE-1)
      printf("\nOverflow");
   else
     {
       q.rear++;
       q.arr[q.rear] = x;
       printf("Element is inserted!\n");
     }
 }
 void insertFront(int x)
 {
   if(q.rear==-1)
    {
      q.rear++;
      q.arr[q.rear] = x;
      printf("Element is inserted!\n");
    }
   else if(q.front>0)
   {
     q.front--;
     q.arr[q.front]=x;
     printf("Element is inserted!\n");
   }
   else
    printf("\nInsertion not possible from front this time\n");
 }
 //Delet function
 void delFront()
 {
   if(q.rear==-1)
     printf("Underflow!");
   else
   {
     q.front++;
     printf("Element deleted!\n");

     if(q.front>q.rear)
     {
      q.front = 0;
      q.rear = -1;
     }
   }
 }
 void delRear()
 {
   if(q.rear==-1)
     printf("Underflow!");

   else
   {
     q.rear--;
      printf("\nElement deleted\n");

     if(q.front>q.rear)
     {
       q.front = 0;
       q.rear = -1;
     }
   }
 }
 //Search function
 void search(int x)
 {
   int flag = 0;
   int i;

   if(q.rear==-1)
   {
     printf("Queue is empty!!!");
   }
   else
   {
     //Logic to search
     for(i=q.front;i<=q.rear;i++)
     {
       if(q.arr[i]==x)
	 flag++;
     }
       if(flag)
	printf("\nElement found %d number of times :", flag);
       else
       printf("\nElement not found!!!");
   }
 }
 //Count function
 void count()
 {
    int c;
    c = q.rear-q.front+1; //Equation to count all elements
    printf("\nTotal elements in queue is %d",c);
 }
 //Display function
 void display()
 {
   int i;

   if(q.rear==-1)
     printf("\nQueue is empty!!!");
   else
   {
     printf("\nElements are.. ");

     //Logic to display all the elements
     for(i=q.front;i<=q.rear;i++)
      {
	printf("%d\t",q.arr[i]);
      }
   }
 }