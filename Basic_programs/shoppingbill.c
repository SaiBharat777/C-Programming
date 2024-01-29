#include <stdio.h>

int main() {
    int numItems, quantity;
    float unitPrice, totalPrice = 0.0;

    // Prompt the user to enter the number of items
    printf("Enter the number of items: ");
    scanf("%d", &numItems);

    // Print the shopping bill header
    printf("\nShopping Bill\n");
    printf("-------------------------------------------------\n");
    printf("%-15s %-15s %-15s\n", "Item", "Quantity", "Total Price");
    printf("-------------------------------------------------\n");

    // Loop to input details for each item and display the bill
    for (int i = 1; i <= numItems; ++i) {
        // Prompt user for quantity and unit price of each item
        printf("Item %d: ", i);
        scanf("%d %f", &quantity, &unitPrice);

        // Calculate and display details for each item
        printf("%-15d %-15d %-15.2f\n", i, quantity, quantity * unitPrice);

        // Update the total price
        totalPrice += quantity * unitPrice;
    }

    // Print total quantity and total price
    printf("-------------------------------------------------\n");
    printf("%-15s %-15s %-15.2f\n", "Total", "", totalPrice);

    return 0;
}

