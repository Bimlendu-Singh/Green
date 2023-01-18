//8. Write a program to check whether a given number is a Prime number or not

#include<stdio.h>

int main()
{
    int x,i,count=0;

        printf("\nEnter number to check prime or not : ");
    scanf("%d",&x);

    for(i=2;i<=x/2;i++)
    {
        if(x%i==0)
        {
          count++;
          break;
        }
    }

        if(count)
     printf("\nNumber is not prime ");
     else
      printf("\nNumber is prime ");    

    return 0;
}