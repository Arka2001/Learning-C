#include<stdio.h>
#include<stdlib.h>

struct stats {
    int points;
    int games;
};

struct stats player[5];

void main() {
    for(int i=0;i<5;i++){
        printf("Enter Player %d\'s point total: ", i+1);
        scanf("%d", &player[i].points);

        printf("Enter Player %d\'s game total: ", i+1);
        scanf("%d", &player[i].games);
    }

    for(int i=0;i<5;i++){
        float scoring_avg = (float) (player[i].points)/(player[i].games);

        printf("Player %d\'s scoring average was %0.2f ppg\n", i+1, scoring_avg);
    }
}