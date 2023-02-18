//10. Write a program to reverse a given number

#include<stdio.h>

int main()
{
    int n,i,x,y,count = 0,num=0;

    //Input
    printf("\nEnter number : ");
    scanf("%d",&n);
    y=n;  //Storing the value of 'n' to 'y' so we don't loose the original number

//Loop to count the digit of the given number
    for(i=n;i!=0;i/=10)
     count++;

    //Loop to reverse the entered number
    for(i=1;i<=count;i++)
    {
        x = n%10;
        num =  num*10 + x;
        n/=10;
    }

    //Display
    printf("\nReverse of %d is %d\n", y,num);


 
    return 0;
}    