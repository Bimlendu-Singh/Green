#include<iostream.h>
#include<conio.h>
	      
void main()                                       
{
 int arr[10],i,j,flag=0,mid,lower=0,upper=9,x,temp;  //Declaring and initializing variables
 clrscr();   

 //Input                              
 cout<<"Enter 10 elements in the array\n ";        
  for(i=0;i<10;i++)
   cin>>arr[i];

 //Displaying elements in unsorted form
 cout<<"\n Entered elements in unsorted form \n"; 
   for(i=0;i<10;i++)                              
   cout<<"  "<<arr[i];
