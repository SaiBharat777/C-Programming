/*Multiplication tables from 2 to 10*/
#include <stdio.h>

int main() {
    for (int num = 2; num <= 10; num++) {
        for (int count = 1; count <= 10; count++) {
            printf("%d * %d = %d\n", num, count, num * count);
        }
        printf("\n");
    }

    return 0;
}
