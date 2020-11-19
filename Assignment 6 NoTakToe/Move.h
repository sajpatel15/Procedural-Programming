//
// Created by Saj Patel on 11/2/2019.
//

#ifndef ASSIGNMENT_6_NOTAKTOE_MOVE_H
#define ASSIGNMENT_6_NOTAKTOE_MOVE_H

// Definition of the move struct that contains two parameters rows and cols
typedef struct {
    int rows;
    int cols;
} Move;
//......................................................................................................................

// Function Definitions for all the things that the move struct needs to do
Move read_move();
#endif //ASSIGNMENT_6_NOTAKTOE_MOVE_H
