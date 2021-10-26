// #include<stdio.h>

// void main(){
//     printf("Hello, World!");
// }


    // whokilleddb's version:-

#include<unistd.h>

void main(){
    char str[12] = "Hello World";
    write(1, str, sizeof(str));
}
