#include<stdio.h>
int main ()
{
    int a,sum=0;
    float b; 
    for (int a=1;a<=10;a++)

    {
        sum=sum+a;
        printf("%d\n",sum);
        b=sum/10;
        printf("avrage all number is %f",b);
        
    }
    return 0;

}