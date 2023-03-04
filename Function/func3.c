#include<stdio.h>

 int abc(int a);


 int main(){
    int b = abc(100);
    printf("Value of b is %d", b);
    return 0;
 }


 int abc(int a){
    return a;
 }