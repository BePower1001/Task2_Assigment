//
// Created by adria on 18/04/2025.
//
#include <stdio.h>

int main() {
    char movieType = 'A';//Variable set to A (setting switch to show A type movie
    char ticketCategory = 'R';//Variable set to R
    float ticketPrice = 0; //initial ticket price
    switch (movieType) {
        case 'A': //Action movie
            switch (ticketCategory) {
                case 'R':
                    ticketPrice = 10;
                break;
                case 'P':
                    ticketPrice = 15;
                break;
            }
        break;
        case 'C': //comedy movie
            switch (ticketCategory) {
                case 'R':
                    ticketPrice = 8;
                break;
                case 'P':
                    ticketPrice = 12;
                break;
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
            }
        break;
        default: //preventing wrong type of movie
            printf("Invalid Movie Type.\n");
        return 1;
    }
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
    printf("Total Ticket Price: %.2f\n", ticketPrice);
    return 0;
}