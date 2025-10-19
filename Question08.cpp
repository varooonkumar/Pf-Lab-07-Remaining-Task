#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter employee IDs:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter number of rotations (k): ");
    scanf("%d", &k);

    k = k % n; // handle if k > n

    int rotated[100];
    int index = 0;

    for (int i = n - k; i < n; i++)
        rotated[index++] = arr[i];

    for (int i = 0; i < n - k; i++)
        rotated[index++] = arr[i];

    printf("\nArray after right rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", rotated[i]);

    return 0;
}

