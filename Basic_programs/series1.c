#include <stdio.h>

int main() {
    int r,count;
    printf("enter range");
    scanf("%d", &r);
    count=1;
    while (count <= r) {
    	printf("%d ", count*5);       
        count++;
    }

    return 0;
}
