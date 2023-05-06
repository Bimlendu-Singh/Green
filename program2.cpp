//8. Write a program to find next Prime number of a given number

#include<stdio.h>

int main()
{
   int i,j,count=0,x;

   printf("\nEnter a number to find next prime number from that number : ");
   scanf("%d",&x);

for(i=x+1;;i++)   
    {
        count = 0;

        //Loop to check prime number
        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {
            count++;
            break;
          }
        }

        if(count==0)
        {
            printf("\nNext prime number is : %d",i);
            break;
        }
          
    }

   return 0;

}