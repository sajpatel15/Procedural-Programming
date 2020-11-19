#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* Author: Saj Patel
 * Date: 1st October 2019
 * Worked with Miguel and asked TA for help
 */
// Function definitions
void print_2D_array_of_bool(bool **board, int rows, int cols);
void clear_array(bool **board, int rows, int cols);
void swap_array(bool ***board, bool ***board2);

//......................................................................................................................
int main() {
    printf("Making 2-D arrays with malloc()\n");

    // variables that are used to define the size of the array
    const int rows = 10;
    const int cols = 12;
//......................................................................................................................
    //Board #1
    // print out array for board 1 before swap
    printf("Board #1\n");
    bool **board = (bool **) malloc(rows * sizeof(bool *));
    for (int i = 0; i < rows; i++) {
        board[i] = (bool *) malloc(sizeof(bool) * cols);
    }

    // loops that assigns all the values of the array to true
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            board[i][j] = true;
        }
    }
    print_2D_array_of_bool(board, rows, cols);
    printf("\n");

//......................................................................................................................
    //Board #2
    //print out array for board 2 before swap
    printf("Board #2\n");
    bool **board2 = (bool **) malloc(rows * sizeof(bool *));
    for (int i = 0; i < rows; i++) {
        board2[i] = (bool *) malloc(sizeof(bool) * cols);
    }

    // loop that assigns all the values of the array to false
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            board2[i][j] = false;
        }
    }
    print_2D_array_of_bool(board2, rows, cols);
    printf("\n");
//......................................................................................................................
    // calls function to swap array
    swap_array(&board, &board2);
//......................................................................................................................
    // prints out array after swap
    printf("Board #1\n");
    print_2D_array_of_bool(board, rows, cols);
    printf("\n");
    printf("Board #2\n");
    print_2D_array_of_bool(board2, rows, cols);
    printf("\n");

    // Clears the content of the array
    clear_array(board,rows,cols);
    clear_array(board2,rows,cols);

    return 0;
}
//......................................................................................................................

// function that prints the two arrays
void print_2D_array_of_bool(bool **board, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (board[i][j]) {
                printf("T ");
            } else {
                printf("F ");
            }
        }
        printf("\n");
    }
}
//......................................................................................................................
// Function that swaps the content of the two arrays
void swap_array(bool ***board, bool ***board2) {
    bool **temp = *board;
    *board = *board2;
    *board2 = temp;
}
//......................................................................................................................

void clear_array(bool **board, int rows, int cols){
    for (int i = 0; i < rows; i++) {
        for (int j = 0; i < cols; ++j) {
            free(board[i]);
            board[i] = NULL;
            break;
        }
    }
    free(board);
    board = NULL;

}
//......................................................................................................................
