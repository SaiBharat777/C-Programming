#include<stdio.h>
#include "time.h"

int main()
{
     struct TIME startTime, stopTime, diff;

     printf("Enter the start time.\n");
     printf("Enter hours, minutes and seconds: ");
     scanf("%d %d %d", &startTime.hours, &startTime.minutes, &startTime.seconds);

     printf("\nEnter the stop time.\n");
     printf("Enter hours, minutes and seconds: ");
     scanf("%d %d %d", &stopTime.hours, &stopTime.minutes, &stopTime.seconds);

     differenceBetweenTimePeriod(startTime, stopTime, &diff);

     printf("\nTime Difference: %d:%d:%d - %d:%d:%d = %d:%d:%d\n", startTime.hours, startTime.minutes, startTime.seconds, stopTime.hours, stopTime.minutes, stopTime.seconds, diff.hours, diff.minutes, diff.seconds);

     return 0;
}

