#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

int main() 
{
    int size1, size2, i;
    
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
    
    int *merged = merge_arrays(arr1, size1, arr2, size2);
    
    printf("Merged array:\n");
    for (i = 0; i < size1 + size2; i++) 
    {
        printf("%d ", merged[i]);
    }

    printf("\n");
    
    free(merged); 
    
    return 0;
}

