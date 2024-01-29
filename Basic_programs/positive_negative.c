#include <stdio.h>

int main() {
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    
    if(a>0){
        printf("%dis  positive number\n",a);
    }else{

    printf("%dis negative number\n",a);
    }
    return 0;
}
