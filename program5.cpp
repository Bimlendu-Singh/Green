//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
    int a,b,i,x=1,n,lcm;

      printf("Enter the two number to check : "); 
      scanf("%d%d",&a,&b);

        if(a<b)
           n=b;
        else
          n=a;

       for(i=n;i>0;)             
       {
          if(a%i==0 && b%i==0)
            lcm=i;  
            i=i*(x+1);       
                                   
       }
        printf("\nLCM of two number is=%d",lcm);
      
return 0;
}