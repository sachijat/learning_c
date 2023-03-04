#include<stdio.h>
   
   
   
   int main ()
 {
    int a ,f=0,i;
    printf("enter the value of a=\n ");
    scanf("%d",&a);
    for ( i=1; a<=i/2; i++)
    { 
        
        
        if(a/i==0){
        
            f=2;
            printf("prime  number ");
        }
        else {
        
            printf("not prime no");
        }
    }
    return 0;
 }