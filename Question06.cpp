#include <stdio.h>

int main() {
    int n, x;
    printf("Enter number of items: ");
    scanf("%d", &n);
    int arr[100];
    printf("Enter item codes:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter defective item code to remove: ");
    scanf("%d", &x);

    printf("\nUpdated item list:\n");
    for (int i = 0; i < n; i++) {
        if (arr[i] != x)
            printf("%d ", arr[i]);
    }
    return 0;
    
    
}

