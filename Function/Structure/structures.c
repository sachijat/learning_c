#include<stdio.h>
#include <string.h>    


//   struct structures 
//     {
//         int a;
//         char b;
//         char abc[20];
        
//     };




// int main(){
   

//     struct structures ram;

//     ram.a = 20;
//     ram.b = 'V';
//    strcpy( ram.abc,"Vimlesh") ;

//    printf("%s whose name starts from %c is %d years old",ram.abc,ram.b,ram.a);


//     return 0;
    
// }




  struct structures
    {
        int a;
        char b;
        char abc[20];
        
    } ram;




int main(){
   

    // struct structures ram;

    ram.a = 20;
    ram.b = 'V';
   strcpy( ram.abc,"Vimlesh") ;

   printf("%s whose name starts from %c is %d years old",ram.abc,ram.b,ram.a);


    return 0;
    
}