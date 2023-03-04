#include<stdio.h>



int main()
{
    int a,b;
    printf("enter the value of a and b=");
    scanf("%d%d",&a,&b);
    if(  a>b  ||    b<a)
    {
        printf(" a is greater ");

    }
    else if(  a<b  ||  b>a)
    {
        printf("b is greater");
    }
    else if(  a==b  ||  b==a)
    {
        printf("a is equal to b");

    }
    return 0;
}