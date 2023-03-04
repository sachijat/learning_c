// #include<stdio.h>


// int main()
// {
//     int a;
//     for(a=1;a<=10;a++)
// {
// printf("%d\n",a);
// if(a==4)
// break ;
// }
// return 0;

// }
#include<stdio.h>


int main()
{
    int a;
    for(a=1;a<=10;a++)
    {
       printf("%d\n",a);
       if(a==4){
       continue;
    }
    }
    return 0;
}