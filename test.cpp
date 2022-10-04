#include<stdio.h>
int main()
{
   int year;

      printf("Enter the year : ");
    scanf("%d",&year);

   if(year%400==0)
         printf("The given year is leap year");

   else if(year%100==0)
        printf("The given year is not leap year");
    
    else if(year%4==0)
        printf("The given year is a leap year");

    else
         printf("The given year is not leap year");
return 0;
}
