#include<stdio.h>

void main(){
    // Initialise the variable
    int num;

    // Take input from user
    printf("Enter a number between 1 and 500: ");
    scanf("%d", &num);

    // Use if-else if - else conditionals to checkl the range of the number and print the result

    if(num >= 1 && num <= 100){
        printf("Your number is between 1 and 100!\n");
    }
    else if(num >= 101 && num <= 200){
        printf("Your number is between 101 and 200!\n");
    }
    else if(num >= 201 && num <= 300){
        printf("Your number is between 201 and 300!\n");
    }
    else if(num >= 301 && num <= 400){
        printf("Your number is between 301 and 400!\n");
    }
    else if(num >= 401 && num <= 500){
        printf("Your number is between 401 and 500!\n");
    }
    else {
        printf("You\'re number is not present in any of our ranges");
    }
}