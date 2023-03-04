#include<stdio.h>


int main()
{
int c,a,b;
printf("enter the value of a 1.add,2.sub,3.mult,4.divide");
scanf("%d%d%d",&c,&a,&b);
switch(c)
{
case 1:
printf("a+b %d",a+b);
break;
case 2:
printf("a-b %d",a-b);
break;
case 3:
printf("a*b %d",a*b);
break;
case 4:
printf("a/b %d",a/b);
break;
default:
printf("enter vailed no");
}

}