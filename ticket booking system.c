#include <stdio.h>

int main() {
    int seats = 50, book;

    printf("Available Seats: %d\n", seats);
    printf("Enter seats to book: ");
    scanf("%d", &book);

    if (book <= seats) {
        seats -= book;
        printf("Booking Successful\n");
        printf("Remaining Seats: %d\n", seats);
    } else {
        printf("Not enough seats available\n");
    }

    return 0;
}