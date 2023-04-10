//10. Write a program to print all Armstrong numbers under 1000

#include<stdio.h>

int main()
{
   int rem,sum=0,count=0,res,i,j,k,x;

    printf("\n Armstrong number under 1000 are : ");

   //Loop to find armstrong numbe under 1000
   for(i=1;i<=1000;i++)
   {
     x = i;
     count = 0;
     sum = 0;

     //Loop counting number of digits in the given number
     while(x!=0)
     {
      count++;
      x = x/10;
     }
     x = i;  //restoring original value of x