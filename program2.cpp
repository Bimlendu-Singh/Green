//Assignment7Qn1.c

//1. Write a program to find the Nth term of the Fibonnaci series.

#include<stdio.h>

int main()
{
   int res = 1,pos,i,prev=0,new=1;

   //Position input 
   printf("\nEnter the position : ");
   scanf("%d",&pos);

   if(pos==1)        //Fibonacci series 0,1,1,2,3,5,8,13,21,34,55,89,144...
    res=0;
