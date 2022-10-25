//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,i,x=1,n,p,lcm;

      printf("Enter the two number to check : "); 
      scanf("%d%d",&a,&b);

        if(a<b)
        {
          n=b;  //Here, 'n' variable will store largest number and 'p' will store the smallest one among them.
          p=a;
        }          
        else
        {
          n=a;
          p=b;
        }
          

       for(i=n;;)             
       {
          if(i%p==0)
          {
            lcm=i;
            break;
          }             
            i=n*(++x);                                          
       }
        printf("\nLCM of two number is=%d",lcm);
      
return 0;
}