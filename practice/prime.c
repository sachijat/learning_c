#include<stdio.h>

 int main()
 {
    int a,f,b;
    printf("enter the value of b=");
    scanf("%d",&b);
    for(a=1;a<=b/2;a++)
    {
        if(a%b==0)
        {f=2;
        printf("prime number ");
        }
        else
        {
            printf("not prime number ");
        }
    }
    return 0;
 }