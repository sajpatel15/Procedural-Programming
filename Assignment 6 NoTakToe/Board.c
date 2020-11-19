//
// Created by Saj Patel on 11/4/2019.
//

#include "Board.h"
#include "Move.h"
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

// Function that creates an empty board by creating a boolean array using pointers
Board create_board() {
    Board b;

    // Creates an array using pointers
    b.entries = (bool **) malloc(4 * sizeof(bool *));
    for (int i = 0; i < 4; ++i) {
        b.entries[i] = (bool *) malloc(4 * sizeof(bool));
    }
    // Assigns all the values of the array to empty
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            b.entries[i][j] = false;
        }
    }
    // Starts with player 1
    b.current_player = 1;
    return b;
}
//......................................................................................................................

// Function that frees up the board after the game has ended
void free_board(Board *b) {
    for (int i = 0; i < 4; ++i) {
        free(b->entries[i]);
        b->entries[i] = NULL;
    }
    free(b->entries);
    b->entries = NULL;
}
//......................................................................................................................

// Function that checks all the criteria to determine if the game is over
bool game_over(Board b) {

    // Loops that checks the rows for 4 in a row combinations
    for (int i = 0; i < 4; ++i) {
        bool complete = true;
        for (int j = 0; j < 4; ++j) {
            if (!b.entries[i][j]) {
                complete = false;
                break;
            }
        }
        if (complete) {
            return true;
        }
    }

    // Loops that checks the columns for 4 in a row combinations
    for (int j = 0; j < 4; ++j) {
        bool complete = true;
        for (int i = 0; i < 4; ++i) {
            if (!b.entries[i][j]) {
                complete = false;
                break;
            }
        }
        if (complete) {
            return true;
        }
    }

    // if statements that checks all diagonal for 4 in a row combinations
    if (b.entries[0][0] == true && b.entries[1][1] == true && b.entries[2][2] == true && b.entries[3][3] == true) {
        return true;
    }
    if (b.entries[0][3] == true && b.entries[1][2] == true && b.entries[2][1] == true && b.entries[3][0] == true) {
        return true;
    }

    return false;
}
//......................................................................................................................

// Function that checks whether the move inputted is valid or not
bool is_valid_move(Board b, Move m) {
    // Checks again if the move is with the parameters and also checks if the point in that array is open
    if ((m.rows >= 0 && m.rows <= 3 && m.cols >= 0 && m.cols <= 3) &&
        !b.entries[m.rows][m.cols]) {
        return true;
    } else {
        return false;
    }
}
//......................................................................................................................

// Function that applies that move onto the Board so it changes the '.' to a 'X' is that particular point is selected
void apply_move(Board *b, Move m) {
    b->entries[m.rows][m.cols] = true;

    // Changes between player 1 and 2
    if (b->current_player == 1) {
        b->current_player = 2;
    } else if (b->current_player == 2) {
        b->current_player = 1;
    }

}
//......................................................................................................................

// Function that prints the board
void print_board(Board b) {
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (b.entries[i][j]) {
                printf("X  "); // prints X if that spot is selected
            } else {
                printf(".  "); // prints . if that spot is open
            }
        }
        printf("\n");
    }
}
//......................................................................................................................