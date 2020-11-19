#include <stdio.h>
#include "Move.h"
#include "Board.h"


/* Creator: Saj Patel
 * worked with: Ryan, Miguel, Jesse Scrivner
 *  Date: November 6th 2019
 */

int main() {
    printf("It's ya boy Saj Patel!!\n");
    printf("Welcome to NoTacToe\n");
    printf("First player to make a four in a row loses!\n");
    printf("Enter a row number between 1 and 4 and a column number between 1 and 4\n");

    // Calling on the create_board function from Board.h
    Board b = create_board();
    // Printing the empty board before the game starts
    print_board(b);

    // boolean that determines if the game is running or not
    bool game_not_over = true;

    // loop that runs the game until a player loses
    while (game_not_over) {
        printf("Player %d turn\n", b.current_player);

        // Reads the players move
        Move m = read_move();

        // calls on function that verifies if the players move is valid
        if (is_valid_move(b, m)) {
            //If move is valid calls on function that applies the move
            apply_move(&b, m);

        } else {
            // otherwise prints an error message
            printf("Error Please try again!\n");
        }
        // prints the board with the update move from the player
        print_board(b);

        // Checks if any of the players have four X's in a row
        if (game_over(b)) {
            // if it does then game is over and the boolean function turns to true that ends the loop
            printf("Player %d Wins! \n", b.current_player);
            game_not_over = false;
        }

    }
    // After the game is done the game board is free to ensure other memory is not being accessed from else where
    free_board(&b);


    return 0;
}
//......................................................................................................................
