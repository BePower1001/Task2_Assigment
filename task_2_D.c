//
// Created by adria on 26/04/2025.
//
#include <stdio.h>

int main() {
    char movieType;
    char ticketCategory;
    char snacks;
    int snacksPrice = 0;
    int Tickets;
    int ticketPrice = 0;
    float totalCost;
    float discount = 0.0;
    float finalPrice;
    int Menu;

    while (1) {
        printf("-- MOVIE TICKET BOOKING SYSTEM --\n");
        printf("1. Book Ticket\n 2. View Ticket Prices\n 3. Exit\n");
        printf("Please select an option: ");
        scanf("%d", &Menu);
        switch (Menu) {
            case 1: {
                printf("Select movie type:\n A - Action\n C - Comedy\n D - Drama\n");
                scanf(" %c", &movieType);
                printf("Select ticket category (R - Regular\n P - Premium)\n");
                scanf(" %c", &ticketCategory);
                printf("Enter number of tickets: ");
                scanf("%d", &Tickets);
                switch (movieType) {
                    case 'A':
                        switch (ticketCategory) {
                            case 'R': ticketPrice = 10;
                            break;
                            case 'P': ticketPrice = 15;
                            break;
                            default: printf("Invalid ticket category.\n");
                            return 1;
                        }
                    break;
                    case 'C':
                        switch (ticketCategory) {
                            case 'R': ticketPrice = 8; break;
                            case 'P': ticketPrice = 12; break;
                            default: printf("Invalid ticket category.\n");
                            return 1;
                        }
                    break;
                    case 'D':
                        switch (ticketCategory) {
                            case 'R': ticketPrice = 7; break;
                            case 'P': ticketPrice = 10; break;
                            default: printf("Invalid ticket category.\n");
                            return 1;
                        }
                    break;
                    default:
                        printf("Invalid Movie type.\n");
                    return 1;
                }
                printf("Would you like snacks?: y/n\n");
                scanf(" %c", &snacks);
                switch (snacks) {
                    case 'y':
                        snacksPrice = 5 * Tickets;
                    break;
                    case 'n':
                        snacksPrice = 0;
                    break;
                }
                totalCost = ticketPrice * Tickets;
                if (Tickets > 5) {
                    discount = totalCost * 0.1;
                }
                finalPrice = totalCost - discount + snacksPrice;
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
                }
                printf("Number of Tickets: %d\n", Tickets);
                printf("Price per Ticket: %d\n", ticketPrice);
                printf("Snacks cost: %d\n", snacksPrice);
                printf("Total Cost Before Discount: %.2f\n", totalCost);
                printf("Discount: %.2f\n", discount);
                printf("Final Price: %.2f\n", finalPrice);
                break;
                case 2: {
                    printf("Ticket prices:\n");
                    printf("Action - Regular: 10, Premium: 15\n");
                    printf("Comedy - Regular: 8, Premium: 12\n");
                    printf("Drama - Regular: 7, Premium: 10\n");
                    break;
                    case 3:
                        printf("Goodbye!\n");
                    return 0;
                    default:
                        printf("Invalid option. Please try again.\n");
                    break;
                }
            }
            return 0;
        }
    }
}
