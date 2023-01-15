//6. Write a program to calculate factorial of a number

#include<stdio.h>

int main()
{
    int x,res=1,i;

    printf("\nEnter number to find its factorial : ");
    scanf("%d",&x);

           for(i=1;i<=x;i++)
        {
         res = res*i;
        }

     printf("\nFactorial is : %d",res);

 
    return 0;
}