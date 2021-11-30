#include<stdio.h>
#include<stdlib.h>

void main(){
    char *arr;

    arr =  malloc(5 * sizeof(char));
    
    if(arr == NULL){
        printf("Memory not allocated\n");
        exit(1);
    }
    else {
        printf("Memory allocated successfully\n");
        free(arr);
    }

}
