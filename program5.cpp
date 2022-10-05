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

  //loop for sorting the elements in ascending order
  for(i=0;i<9;i++)    
   {
    for(j=0;j<9-i;j++)
     {
      if(arr[j]>arr[j+1])
       {
	      temp=arr[j];
	      arr[j]=arr[j+1];
	      arr[j+1]=temp;
       }
     }
   }
   //Displaying elements after sorting 
 cout<<"\n Entered elements in sorted form are \n";
   for(i=0;i<10;i++)                               
    cout<<"  "<<arr[i];

 cout<<" \n Enter the element to be search \n"; //
 cin>>x;
//Displaying elements after sorting 
 cout<<"\n Entered elements in sorted form are \n";
   for(i=0;i<10;i++)                               
    cout<<"  "<<arr[i];

 cout<<" \n Enter the element to be search \n"; //
 cin>>x;
//Displaying elements after sorting 
 cout<<"\n Entered elements in sorted form are \n";
   for(i=0;i<10;i++)                               
    cout<<"  "<<arr[i];

 cout<<" \n Enter the element to be search \n"; //
 cin>>x;
//Displaying elements after sorting 
 cout<<"\n Entered elements in sorted form are \n";
   for(i=0;i<10;i++)                               
    cout<<"  "<<arr[i];

 cout<<" \n Enter the element to be search \n"; //
 cin>>x;
//Displaying elements after sorting 
 cout<<"\n Entered elements in sorted form are \n";
   for(i=0;i<10;i++)                               
    cout<<"  "<<arr[i];

 cout<<" \n Enter the element to be search \n"; //
 cin>>x;
