#include<stdio.h>


int xyz(int a,int b)
{
    return a+b;

}
int main ()
{
    int x,y;
    printf("Enter the value of x and y ");
     scanf("%d%d",&x,&y);
    int c=xyz(x,y);
   
    printf("sum of a and b %d",c);

    return 0;
}