#include<stdio.h>
#include<stdlib.h>

void main() {
    // Create a Pointer to for an integer array
    int* arr;

    int n; // For the number of elements

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Declare the array by allocating the required number of memory bytes

    arr = (int*)malloc(n*sizeof(int));

    // take all the elements as user input
    int i=0;
    for(i=0;i<n;i++){
        printf("Enter an element: ");
        scanf("%d", arr+i);
    }

    printf("There are %d elements in the array. They are:-\n", n);

    i=0;
    for(i=0;i<n;i++){
        printf("%d\n", *(arr+i));
    }
}