#include<stdio.h>

void main() {
    float pi = 3.14;
    float radius;

    printf("Enter the radius of your circle: ");
    scanf("%f", &radius);

    printf("The area of your circle is %lf \n", pi*radius*radius);
}