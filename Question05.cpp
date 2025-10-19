#include <stdio.h>

int main() {
    int n, budget;
    printf("Enter number of items: ");
    scanf("%d", &n);

    int prices[100];
    printf("Enter item prices:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    printf("Enter customer's budget: ");
    scanf("%d", &budget);

    int found = 0;

    for (int i = 0; i < n; i++) {
        int remaining = budget - prices[i];
        for (int j = i + 1; j < n; j++) { // <-- note: we can't avoid a double loop logically here
            if (prices[j] == remaining) {
                printf("\nItems found: %d and %d", prices[i], prices[j]);
                found = 1;
                break;
            }
        }
        if (found) break;
    }

    if (!found)
        printf("\nNo two items match the budget.");

    return 0;
}

