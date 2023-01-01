//2. Write a program to print first N terms of Fibonacci series

#include<stdio.h>

int main()
{
   int res,pos,i,prev=0,new=1,n,j;

   //Fibonacci series 0,1,1,2,3,5,8,13,21,34,55,89,144...

   //Position input 
   printf("\nEnter the nth term : ");
   scanf("%d",&n);

   printf("\nFibonnaci series till %dth term are : ",n);