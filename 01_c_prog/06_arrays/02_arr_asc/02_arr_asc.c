/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: c program to print one dimensional array in ascending order, take size and elements of array from user.
 * Brief: program to print one dimensional array in ascending order.
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
    int n, i;
    int arr[100];

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter the elements of array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    ascending(arr, n);

    printf("The array in ascending order is: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}

// Program End
