#include <stdio.h>

int main() {
    int num,n;
    printf("enter the range");
    scanf("%d", &n);
    num=n;
    while (num <= n) {
        if(num>0){
           printf("%d ", num); 
        }
        
        num--;
    }

    return 0;
}
