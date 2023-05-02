#include <stdio.h>
#include "change.h"

int main() {
    char str[100] = "PHYTEC";
    
    printf("Original string: %s\n", str);
    
    change_case(str);
    
    printf("Modified string: %s\n", str);

    return 0;
}

