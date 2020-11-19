//
// Created by Saj Patel on 11/2/2019.
//

#ifndef ASSIGNMENT_6_NOTAKTOE_BOARD_H
#define ASSIGNMENT_6_NOTAKTOE_BOARD_H

#include "Move.h"
#include <stdbool.h>

// Definition of the struct Board that contains the array entries and the current players field
typedef struct {
    bool** entries;
    int current_player;
} Board;

//......................................................................................................................
Board create_board();
void free_board(Board *b);
bool game_over(Board b);
bool is_valid_move(Board b, Move m);
void apply_move(Board *b, Move m);
void print_board(Board b);

#endif //ASSIGNMENT_6_NOTAKTOE_BOARD_H
