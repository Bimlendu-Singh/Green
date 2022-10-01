//Multiplication of two matrix and stored in 3rd one
#include<stdio.h>
#include<conio.h>

void main()         
{
 int X[3][3],Y[3][3],Z[3][3],i,j,k;  //Declaring matrix and variable
 clrscr();                                       

 //Input in Matrix X
 printf("\n Enter 9 elements in matrix X \n");
 for(i=0;i<3;i++)
  for(j=0;j<3;j++)
   scanf("%d",&X[i][j]);

 //Displaying matrix X
 printf("\n Matrix X is \n");     
  for(i=0;i<3;i++)
   {
    printf("\n\n");
     for(j=0;j<3;j++)
      printf(" %d ", X[i][j]);
   }