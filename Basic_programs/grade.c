#include <stdio.h>

int main() {
    float marks[5];
    float total = 0, average,percent;    
    printf("enter marks out of 100\n");
    // Take user input for 5 marks
    for (int i = 0; i < 5; i++) {
        printf("Enter mark %d: ", i + 1);
        scanf("%f", &marks[i]);

        // Add the mark to the total
        total += marks[i];
    }

    average = total / 5;
    printf("Average mark: %.2f\n", average);
    
    percent=(total/500)*100;
    
    if(percent>80){
        printf("grade A");
    }else if(percent>60){
        printf("grade B");
    }else if(percent>40){
        printf("grade C");
    }else{
        printf("grade D");
    }

    return 0;
}
