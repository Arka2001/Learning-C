#include<stdio.h>

void main(){
    int numerator, denominator;

    printf("Enter a numerator: ");
    scanf("%d", &numerator);

    printf("Enter a denominator: ");
    scanf("%d", &denominator);

    int rem = numerator % denominator;
    if(rem==0){
        printf("There is NO remainder!");
    } 
    else {
        printf("There is a remainder");
    }
}