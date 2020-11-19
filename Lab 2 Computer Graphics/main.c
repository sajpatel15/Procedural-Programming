#include <stdio.h>

int main() {
    int size = 10; // dimensions of a square grid
    printf("Filled Square\n");
    for (int row = 0; row < size; row++) {

        for (int column = 0; column < size; column++) {
            // Conditional statements to decide what character to print
            printf("X");
        }
        printf("\n"); // end of row
    }
    printf("\n");

    //Diagonal Down Line
    printf("Diagonal Down Line\n");
    for (int row = 0; row < 10; row++) {
        for (int column = 0; column < size; column++) {
            if (column == row) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }


    //Diagonal Up line
    printf("Diagonal Up Line\n");
    for (int row = 0; row < 10; row++) {
        for (int column = 0; column < size; column++) {
            if (column == (size - row - 1)) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // Hollow Box
    printf("Hollow Box\n");
    for (int row = 0; row < 10; row++) {
        for (int column = 0; column < size; column++) {
            if (row == 0 || row == 9 || column == 0 || column == 9) {
                printf("X");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    // Alternating Rows
    printf("Alternating Row\n");
    for (int row = 0; row < 10; row++) {
        for (int column = 0; column < size; column++) {
            if (row == 0 || row == 3 || row == 6 || row == 9) {
                printf("X");
            } else if (row == 1 || row == 4 || row == 7) {
                printf("+");

            } else {
                printf("-");
            }
        }
        printf("\n");
    }
    //Intresting Combination
    printf("Intresting Combination\n");
    for (int row = 0; row < 10; row++) {
        for (int column = 0; column < size; column++) {
            if ((column + row) % 3) {
                printf("+");
            } else {
                printf("X");
            }
        }
        printf("\n");
    }
    return 0;
}
