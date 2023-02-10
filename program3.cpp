//3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
   int res=-1,pos,i,prev=0,new=1,x,j,flag=0;

   //Fibonacci series 0,1,1,2,3,5,8,13,21,34,55,89,144...

   //Number input 
   printf("\nEnter the number to check whether it is in fibonacci series or not : ");
   scanf("%d",&x);