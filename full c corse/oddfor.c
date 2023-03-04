#include <stdio.h>
int main ()
{
    int a,sum=0;
    printf("Enter no. : ");
    // scanf("%d", &num);
    for(a=1;a<=10;a++){
   if(a%2==0)
   {
    sum=a+sum;

      printf("sum of even number is =%d\n",a);
   }     
   else 
   {
    int num=0;
    num=a+num;
    printf("sum of the odd number is=%d\n",a);
   }    
    }
    
}

