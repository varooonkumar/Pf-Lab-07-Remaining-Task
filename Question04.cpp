#include <stdio.h>

int main() {
    int n;
    printf("Enter number of sales records: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter product IDs:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxCount = 0, mostFreq = arr[0], count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            count++;
        else
            count = 1;

        if (count > maxCount) {
            maxCount = count;
            mostFreq = arr[i];
        }
    }

    printf("\nMost frequent product ID: %d", mostFreq);
    return 0;
}

