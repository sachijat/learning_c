#include<stdio.h>
void prime(int);
int  main()
{
int i; 
printf("enter to check ");
scanf("%d",&i);
prime(i);
}
void prime(int i)
{
int a,count=0;
for (a=1;a<=i;a++){
if (i%a==0)
count++;
}  
if (count==2)
{
printf("prime number ");
}
else{
    printf("not a prime number ");
}
}
