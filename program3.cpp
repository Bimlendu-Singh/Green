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

     
   for(i=1;i<=n;i++)
   {
      pos = i; 

      if(pos==1)        
       res=0;

      else if(pos==2)        
       res=1;
  
      else
        {
         res = 0;  
         prev = 0;
         new = 1;

         for(j=1;j<pos-1;j++)
         {
           res = new + prev;    //Here, 'new' and 'prev' variable to store last and 2nd last digit so we can add them and store result in 'res' variable
           prev = new;
           new = res; 
         }
        }
        printf(" %d ",res);   //Printing the finbonacci number each time
   }
   

   return 0;

}
