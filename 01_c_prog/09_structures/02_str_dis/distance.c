#include<stdio.h>
#include "distance.h"

struct distance add_distances(struct distance d1, struct distance d2) 
{
    struct distance result;

    result.feet = d1.feet + d2.feet;
    result.inches = d1.inches + d2.inches;

    if (result.inches >= 12) 
    {
        result.feet++;
        result.inches -= 12;
    }

    return result;
}

