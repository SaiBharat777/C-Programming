#include "time.h"

void differenceBetweenTimePeriod(struct TIME start, struct TIME stop, struct TIME *diff)
{
     while (stop.seconds > start.seconds)
     {
          --start.minutes;
          start.seconds += 60;
     }
     diff->seconds = start.seconds - stop.seconds;

     while (stop.minutes > start.minutes)
     {
          --start.hours;
          start.minutes += 60;
     }
     diff->minutes = start.minutes - stop.minutes;
     diff->hours = start.hours - stop.hours;
}

