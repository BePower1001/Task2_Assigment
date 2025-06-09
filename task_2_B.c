#include <stdio.h>

int main() {
    char movieType;
    char ticketCategory;
    int Tickets;
    int ticketPrice = 0;
    int totalCost = 0;

// Printing menu
    printf("Select movie type:\n A - Action\n C - Comedy\n D - Drama\n");
    scanf(" %c", &movieType);
    printf("Select ticket category (R - Regular\n P - Premium\n");
    scanf(" %c", &ticketCategory);
    printf("Enter number of tickets: ");
    scanf("%d", &Tickets);
    switch (movieType) { //Switch for cat, price + error handling
        case 'A': // Action
            switch (ticketCategory) {
                case 'R':
                    ticketPrice = 10;
                    break;
                case 'P':
                    ticketPrice = 15;
                    break;
                default:
                    printf("Invalid ticket category.\n");
                    return 1;
            }
            break;
        case 'C': // comedy
            switch (ticketCategory) {
                case 'R':
                    ticketPrice = 8;
                    break;
                case 'P':
                    ticketPrice = 12;
                    break;
                default:
                    printf("Invalid ticket category.\n");
                    return 1;
            }
            break;
        case 'D': //drama
            switch (ticketCategory) {
                case 'R':
                    ticketPrice = 7;
                    break;
                case 'P':
                    ticketPrice = 10;
                    break;
                default:
                    printf("Invalid ticket category.\n");
                    return 1;
            }
            break;
        default:
            printf("Invalid Movie type.\n");
            return 1;
    }
//calculations on total cost
    totalCost = ticketPrice * Tickets;
    printf("Movie Type: ");
    switch (movieType) {
        case 'A': printf("Action\n");
        break;
        case 'C': printf("Comedy\n");
        break;
        case 'D': printf("Drama\n");
        break;
    }
    printf("Ticket Category: ");
    switch (ticketCategory) {
        case 'R': printf("Regular\n");
        break;
        case 'P': printf("Premium\n");
        break;
    } //program output/summary
    printf("Number of Tickets: %d\n", Tickets);
    printf("Price per Ticket: %d\n", ticketPrice);
    printf("Total Cost: %d\n", totalCost);
    return 0;
}