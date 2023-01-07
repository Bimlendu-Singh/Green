//Assignment7Qn1.c

//1. Write a program to find the Nth term of the Fibonnaci series.

int main()
{
   int res = 1,pos,i,prev=0,new=1;

   //Position input 
   printf("\nEnter the position : ");
   scanf("%d",&pos);

   if(pos==1)        //Fibonacci series 0,1,1,2,3,5,8,13,21,34,55,89,144...
    res=0;

       else if(pos>3)
    {
      res = 0;  

     for(i=1;i<pos-1;i++)
     {
       res = new + prev;    //Here, 'new' and 'prev' variable to store last and 2nd last digit so we can add them and store result in 'res' variable
       prev = new;
       new = res; 
     }
    }

   printf("\nAt position %d of the fibonacci series is : %d\n",pos,res);

   return 0;

}
