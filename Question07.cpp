#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter number of students in Section A: ");
    scanf("%d", &n1);
    int A[50];
    printf("Enter roll numbers of Section A:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &A[i]);
    }

    printf("Enter number of students in Section B: ");
    scanf("%d", &n2);
    int B[50];
    printf("Enter roll numbers of Section B:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &B[i]);
    }
    int merged[100];
    for (int i = 0; i < n1; i++)
        merged[i] = A[i];
    for (int i = 0; i < n2; i++)
        merged[n1 + i] = B[i];

   printf("\nCombined list of roll numbers:\n");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);


    return 0;
}

