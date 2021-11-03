#include<stdio.h>
#include<math.h>

void main() {
    // Initialise the variables
    int a,b,c;

    printf("Enter the value of variable \'A\': ");
    scanf("%d", &a);

    printf("Enter the value of variable \'B\': ");
    scanf("%d", &b);

    printf("Enter the value of variable \'C\': ");
    scanf("%d", &c);

    // Find out the discriminant for the quadratic formula
    int discriminant = sqrt((b*b) - (4*a*c));

    // if discriminant is less than 0 then there are imaginary roots
    if(discriminant < 0){
        printf("An equation with these values of a= %d, b= %d, and c = %d has imaginary roots", a, b, c);
    }
    //if the discriminant is equal to zero, we have both the roots are real and equal to each other
    else if(discriminant == 0){
        double root = ((-b) + discriminant) / (2*a);
        printf("The roots of this equation are equal to %lf", root);
    }
    // if discriminant > 0 then the roots are real numbers and unequal to each other
    else{
        double root1 = ((-b) + discriminant) / (2*a);
        double root2 = ((-b) - discriminant) / (2*a);

        printf("The solution using the \'+\' operator is: %lf \n", root1);
        printf("The solution using the \'-\' operator is: %lf \n", root2);
    }
}