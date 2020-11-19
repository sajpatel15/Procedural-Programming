 //
// Created by Saj Patel on 11/2/2019.
//

#include "Move.h"
#include <stdio.h>

// Function that reads the players move
Move read_move() {
    Move valid_move;
    // Infinite loop that prompts the user for an input until it is within bounds
    for (;;) {
        printf("Enter a row and column: ");

        // Scanner function that reads the users inputs
        scanf("%d", &valid_move.rows);
        scanf("%d", &valid_move.cols);

        // If-else statements that check the parameters of the input and ensures they are within bounds
        if (!(valid_move.rows - 1 >= 0 && valid_move.rows - 1 <= 3)) {
            printf("Error: Row out of range\n"); // prints out error message
        } else if (!(valid_move.cols - 1 >= 0 && valid_move.cols - 1 <= 3)) {
            printf("Error: Column out of range\n"); // prints out error message
        } else {
            // subtracts 1 from the rows and cols inputs because the board is an array and
            // it usually starts from 0 instead of 1
            --valid_move.rows;
            --valid_move.cols;
            return valid_move;
        }


    }
}
