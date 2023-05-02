/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program, if user enter "hi" then output print "Hello" else print "not enter hi".
 * Brief: 
 * Author: Sai Bharat
 * Title: Program Manager / Trainner
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include<string.h>

// Main Function
int main()
{
     char input[10];
     printf("Enter a string: ");
     scanf("%s", input);
    
     if(strcmp(input, "hi") == 0) 
     {
         printf("Hello\n\n");
     }
     else 
     {
         printf("not enter hi\n\n");
     }

     return 0;
}

// Program End
