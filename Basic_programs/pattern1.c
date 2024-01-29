#include <stdio.h>

int main() {
    int rows, cols;

    // Input the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Check for valid dimensions
    if (rows <= 0 || cols <= 0) {
        printf("Invalid dimensions for the matrix.\n");
        return 1; // Exit with an error code
    }

    // Iterate through each row
    for (int i = 1; i <= rows; i++) {
        // Iterate through each column
        for (int j = 1; j <= cols; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}

