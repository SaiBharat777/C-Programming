#include<stdio.h>
#include <string.h>
#include "password.h"

int check_password(char *password) 
{
    if (strcmp(password, "danger") == 0) 
    {
        return 1;
    } 
    
    else 
    {
        return 0;
    }
}

