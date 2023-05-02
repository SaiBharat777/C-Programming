/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to print 2-D array i.e Matrix,take num of rows and columns from user and also matrix elements.
 * Brief: c program to print 2-D array.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>

// Main Function
int main()
{
     int rows, columns;
     printf("Enter no.of rows: ");
     scanf("%d", &rows);
     printf("Enter no.of columns: ");
     scanf("%d", &columns);

     int matrix[rows][columns];
     printf("Enter elements of matrix: ");
     for(int i=0; i<rows; i++)
     {
          for(int j=0; j<columns; j++)
          {
               scanf("%d", &matrix[i][j]);
          }
     }

     printf("The Matrix is:\n");
     for(int i = 0; i < rows; i++) 
     {
         for (int j = 0; j < columns; j++) 
         {
             printf("%d  ", matrix[i][j]);
         }
         printf("\n");
     }
     
     return 0;
}

// Program End
