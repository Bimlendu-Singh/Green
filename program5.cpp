//Assignment7Qn1.c

//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
   int res = 1,pos,i,prev=0,new=1;

   //Position input 
   printf("\nEnter the position : ");
   scanf("%d",&pos);

    else if(pos>3)
    {
      res = 0;  

     for(i=1;i<pos-1;i++)
     {
       res = new + prev;    //Here, 'new' and 'prev' variable to store last and 2nd last digit so we can add them and store result in 'res' variable
       prev = new;
       new = res; 
     }
    }s