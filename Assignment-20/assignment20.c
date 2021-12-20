#include<stdio.h>
#include<stdlib.h>

struct Data
{
    /* data */
    int integer;
    float float_number;
    char character;
} data;

void main() {

    data.integer = 50;
    data.character = 'W';
    data.float_number = 3.14;

    printf("This is the int: %d, this is the char: %c, this is the float: %f", data.integer, data.character, data.float_number);
    return;
}

