#include<stdio.h>
#include<stdlib.h>

int main(){

 int num;
   FILE * fptr;

   fptr  = fopen("D:\\mohan.txt","w");

   if(fptr==NULL){
    printf("Error");
    exit(1);
   }
   printf("Enter the num");

   scanf("%d",&num);

   fprintf(fptr,"%d",num);
   fclose(fptr);


    return 0;
}