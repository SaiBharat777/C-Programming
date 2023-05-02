#include <stdio.h>
#include <stdlib.h>
#include "arr.h"

int* merge_arrays(int arr1[], int size1, int arr2[], int size2) {
    int size_merged = size1 + size2;
    int *merged = (int *) malloc(size_merged * sizeof(int));
    int i, j;
    
    for (i = 0; i < size1; i++) 
    {
        merged[i] = arr1[i];
    }
    
    for (j = 0; j < size2; j++) 
    {
        merged[i] = arr2[j];
        i++;
    }
    
    return merged;
}

