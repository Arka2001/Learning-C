#include<stdio.h>
#include<stdlib.h>

struct example {
    int integer;
};

void main(){
    struct example *ptr;

    struct example test;

    // Pointer initialisation statement

    ptr = &test;

    test.integer = 5;
    printf("%d\n", test.integer);

    (*ptr).integer = 6;
    printf("%d\n", test.integer);

    ptr->integer = 7;
    printf("%d\n", test.integer);
    
    
    
}
