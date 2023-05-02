/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to print one dimensional array in descending order, take size and elements of array from user.
 * Brief: c program to print one dimensional array in descending order.
 * Author: Sai Bharat
 * Title: Project Engineer
 * Last Modified Date: 03.04.2023
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include"array.h"

// Main Function
int main()
{
     int size, i;
    
     printf("Enter the size of the array: ");
     scanf("%d", &size);
    
     int arr[size];
    
     printf("Enter the elements of the array: ");
     for(i = 0; i < size; i++) 
     {
         scanf("%d", &arr[i]);
     }
    
     sort(arr, size);
    
     printf("The array in descending order is: ");
     for(i = 0; i < size; i++) 
     {
         printf("%d ", arr[i]);
     }
     printf("\n\n");
     
     return 0;
}

// Program End
