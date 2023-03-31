/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to check the greatest among four numbers using elseifLadder.
 * Brief: Comparing four numbers using elseif ladder.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 27.03.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int a,b,c,d;
     printf("Enter value of a: ");
     scanf("%d", &a);
     printf("Enter value of b: ");
     scanf("%d", &b);
     printf("Enter value of c: ");
     scanf("%d", &c);
     printf("Enter value of d: ");
     scanf("%d", &d);
      
     if(a>=b && a>=c && a>=d)
     {
          printf("%d is greatest.\n", a);
     }
     else if (b>=a && b>=c && b>=d)
     {
          printf("%d is greatest.\n", b);
     }
     else if (c>=a && c>=b && c>=d)
     {
          printf("%d is greatest.\n", c);
     }
     else
     {
          printf("Value of d(%d) is greatest.\n", d);
     }
     
     return 0;
}

// Program End
