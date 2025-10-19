#include <stdio.h>
int main() {
    int seats[10] = {0};
    int booked = 0, seat;

    while (booked < 5) {
        printf("\nEnter seat number (0-9): ");
        scanf("%d", &seat);
        if (seat < 0 || seat > 9) {
            printf("Invalid seat number.\n");
            continue;
        }
if (seats[seat] == 0) {
            seats[seat] = 1;
            booked++;
            printf("Seat booked successfully!\n");
        } else {
            printf("Seat already booked.\n");
        }
    }
    printf("\nFinal seat status (1=booked, 0=empty):\n");
    for (int i = 0; i < 10; i++)
        printf("%d ", seats[i]);

    
	return 0;
}

