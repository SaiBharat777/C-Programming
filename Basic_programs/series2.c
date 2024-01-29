#include <stdio.h>

int main() {
    int a,r,count;
    printf("enter range");
    scanf("%d", &r);
    count=1;
    a=2;
    while (count <= r) { 
    	printf("%d ", count*a);  
        count++;
    }

    return 0;
}
