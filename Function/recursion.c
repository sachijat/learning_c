#include<stdio.h>


int sum (int start, int end );

int main ()
    {
        int start,end;
        printf("Enter value of a and b : ");
        scanf("%d%d",&start,&end);
 int a = sum(start,end);
printf(" sun of a and b =%d",a);

    
return 0;
}

int sum(int  start , int end){

 if(end>start)
 return end + sum(start,end-1);
 else
 return 0;

}