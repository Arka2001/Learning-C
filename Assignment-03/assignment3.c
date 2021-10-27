#include<stdio.h>
#include<unistd.h>

void main() {
    char firstName[10], lastName[10];
    printf("Enter your first name: ");
    scanf("%s", &firstName);

    printf("Enter your last name: ");
    scanf("%s", &lastName);

    printf("\nHello %s %s", firstName, lastName);

}