//3. Write a program to check whether a given number is there in the Fibonacci series or not.

#include<stdio.h>

int main()
{
   int res=-1,pos,i,prev=0,new=1,x,j,flag=0;

   //Fibonacci series 0,1,1,2,3,5,8,13,21,34,55,89,144...

   //Number input 
   printf("\nEnter the number to check whether it is in fibonacci series or not : ");
   scanf("%d",&x);

   //Loop with condition that it will search and match the entered number with other number in fibonacci series until it find or come out of the loop
   for(pos=1;x>res;pos++)

   {

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
        
        //It will match the input to the finoacci number when it matches , it will come out of the loop
        if(res==x)
        {
            flag++;
            break;
        }
   }

   if(flag)
    printf("\n%d is in fibonacci series \n",x);
   else
    printf("\n%d is NOT in fibonacci series \n",x);

   return 0;

}