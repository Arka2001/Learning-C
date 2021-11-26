#include<stdio.h>
#include<stdlib.h>

void main(){
    int a = 10;
    int* ptr = &a;

    printf("The value of the int variable is: %d\n", a);
    printf("The value of the pointer to the int variable is: %p\n", ptr);
    printf("The memory address of the int variable is: %x\n", &a);
    printf("The value held at the memory location that the pointer is pointing to is: %d\n", *ptr);
}
