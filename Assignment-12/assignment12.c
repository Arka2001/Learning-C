#include<stdio.h>
#include<stdlib.h>

void main(){
    int numFlips;

    printf("How many times would you like to flip the coin? ");
    scanf("%d", &numFlips);

    int count = 0;
    int i=0;
    for(i=0;i<numFlips;i++){
        if(rand()%2 == 0){
            count++;
        }
    }

    printf("After flipping the coin %d times, the results were\n", numFlips);
    printf("%d Heads\n%d Tails\n", count, numFlips - count);
}