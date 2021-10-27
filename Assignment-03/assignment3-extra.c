#include<stdio.h>
#include<stdlib.h>

/*
    What we want to do right here is to dynamically allocate the exact amount of spaces required for the names
    For that we need to declare character pointers which shall point to the address of the first letter for each string
    And then we shall print the names
*/

void main() {
    char *firstName, *lastName;

    printf("Enter first name: ");
    scanf("%ms", &firstName);

    printf("Enter last name: ");
    scanf("%ms", &lastName);

    printf("Hello %s %s \n", firstName, lastName);

    free(firstName);
    free(lastName);
}