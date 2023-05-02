/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to print one dimensional array after merge two one dimensional array, take size and elements of first and sec array from user.
 * Brief: Program to merge two one dimensional array.
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
     int size1, size2, size_merged, i, j;
    
     printf("Enter size of the first array: ");
     scanf("%d", &size1);

     int arr1[size1];
     printf("Enter elements of the first array:\n");
     for (i = 0; i < size1; i++) 
     {
         scanf("%d", &arr1[i]);
     }

     printf("Enter size of the second array: ");
     scanf("%d", &size2);

     int arr2[size2];
     printf("Enter elements of the second array:\n");
     for (i = 0; i < size2; i++) 
     {
         scanf("%d", &arr2[i]);
     }
    
     size_merged = size1 + size2;
     int merged[size_merged];
    
     for (i = 0; i < size1; i++) 
     {
         merged[i] = arr1[i];
     }
    
     for (j = 0; j < size2; j++) 
     {
         merged[i] = arr2[j];
         i++;
     }
    
     printf("Merged array:\n");
     for (i = 0; i < size_merged; i++) 
     {
         printf("%d ", merged[i]);
     }
     printf("\n");
     
     return 0;
}

// Program End
