#include <stdio.h>
#include "password.h"

int main() 
{
    char password[20];
    printf("Enter password: ");
    scanf("%s", password);

    if (check_password(password)) 
    {
        printf("Entered correct password\n");
    } 
    
    else 
    {
        printf("Wrong password\n");
    }

    return 0;
}

