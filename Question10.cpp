#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int arr[10];
    srand(time(0));
    printf("Generated 10 random numbers:\n");
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100; // random numbers 0–99
        printf("%d ", arr[i]);
    }
    int search;
    printf("\n\nEnter number to search: ");
    scanf("%d", &search);
    
    for (int i = 0; i < 10; i++) {
        if (arr[i] == search) {
            printf("Number found at index %d.\n", i);
            return 0;
        }
    }
    printf("Number not found in the list.\n");
    
    return 0;
}

