#include<stdio.h>
 int main()
 {
    int a,b=0,i ;
    printf("enter the value= ");
    scanf("%d",&a);
    for(i=2;i<=a/2;i++)
    {
     
      if (a%i==0)
      {
          b=1;
      }
      }   
      if(b==0)
      
           printf ("the value of a=prime ");

      
      else 
      
         printf("not prime ");
      
      
    
 }