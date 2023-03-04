#include<stdio.h>


int xyz(int x, int y){
    return x+y;
}

int main(){

//  int a = xyz(100,200);
int a , b ,c ;

 printf("Enter the value ");
 scanf("%d%d",&a,&b );
 c = xyz(a,b);
  printf("Sum of a and b is = %d",c);
//  printf("Sum of x and y is = %d", a);



    return 0;
}