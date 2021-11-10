#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

void main() {
    /*
    * Initially we are declaring an integer pointer which shall act as our dynamically allocated array, a size variable which shall increase depending on the user's choice
    * After that we are declaring and allocating a single memory byte for an array of single integer element
    */
    int* arr;
    int size = 1;
    arr = (int*) malloc (size*sizeof(int));

    char string[2];  //* This string shall help us determine whether to continue or break the loop of input
    strcpy(string, "Y");  

    int i=0;          
    bool run = true;    //* Boolean variable to determine whether we should continue running the while loop or 

    while(run){
        printf("\nEnter a number: ");
        scanf("%d", arr+i);

        printf("\nDo you want to continue? Y/N ");
        scanf("%s", string);

        if(strcmp(string, "Y") == 0){
            size++;
            i++;
            arr = (int*) realloc (arr, size*sizeof(int));  //* Reallocate the size of the array with one size greater than the last known size
        } else {
            run = false;
        }
    }

    ///* Variables to store the sum and the average of the elements in the array
    int sum = 0;
    float avg = 0.0;
    
    i = 0;
    for(i=0;i<size;i++){      //* For loop for calculating the sum of the elements of the array
        sum += *(arr+i);
    }

    avg = (float) sum/size;

    printf("\n%0.2f is the average\n", avg);

    free(arr);    //* Finally free all the memory allocated to the array to prevent memory leaks

    return;
}