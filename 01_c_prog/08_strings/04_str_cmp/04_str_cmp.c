/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to compare two strings,if user enter "danger" then print "entered correct password" else print "wrong password".
 * Brief: comparing two strings.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 05.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>

// Main Function
int main()
{
     char password[20];
     printf("Enter Password: ");
     scanf("%s", password);

     if (strcmp(password, "danger") == 0)
     {
          printf("Entered correct password.\n");
     }
     else
     {
          printf("Worng password.\n");
     }
     
     return 0;
}

// Program End
