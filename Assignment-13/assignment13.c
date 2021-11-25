#include<stdio.h>
#include<stdlib.h>

void main() {
    int arr[4][5];
    
    int i=0, j=0;

    float sum=0.0, average = 0.0;

    for(i=0;i<4;i++){
        printf("\nGame #%d", i+1);
        for(j=0;j<5;j++){
            printf("\nEnter scoring total for player #%d: ", j+1);
            scanf("%d", &arr[i][j]);
        }
    }

    i = 0;
    j=0;

    int max_avg_player;

    for(j=0;j<5;j++){
        sum = 0.0;
        for(i=0;i<4;i++){
            sum += arr[i][j];
        }

        sum = (float) sum/4;
        if(average < sum) {
            average = sum;
            max_avg_player = j+1;
        }
    }

    printf("\nPlayer #%d had the highest scoring average at %.2f points per game", max_avg_player, average);

}
