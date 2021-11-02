#include<stdio.h>

void main() {
    int seconds;

    printf("Enter total number of seconds: ");
    scanf("%d", &seconds);

    int hours = seconds / 3600;
    int final_seconds = seconds % 3600;
    int mins = final_seconds / 60;
    final_seconds %= 60;

    printf("%d seconds is equal to %d hours, %d minutes, and %d seconds\n", seconds, hours, mins, final_seconds);
}