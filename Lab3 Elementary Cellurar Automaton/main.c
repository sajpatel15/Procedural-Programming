#include <stdio.h>
#include <stdbool.h>

// Author: Saj Patel
// Worked With: TA (Nidhi) , Jesse Scrivner and Malcolm Spiers and

int main() {

    // Creating 2-D arrays of bool

    int row = 32;  // row
    int column = 67; // column

    bool array[row] [column];

    for(int i = 0; i < row; ++i){
        for (int j = 0; j < column; ++j){

            array[i] [j] = false;

        }
    } // initializes all the values of the array to false

    array[0] [1]= true;
    array[0] [column/2] = true;




    // loop executing the XOR for rule 60

    for(int i = 1; i < row; ++i){
        for (int j = 1; j < column; ++j ){

            array[i][j] = (array[i - 1] [j - 1] ) ^ ( array[i - 1] [j]);

        }
    }

    // loop that prints the rows and columns according to the boolean value assigned to them

    for(int i = 0; i < row; ++i){
        for (int j = 0; j < column; ++j ){
            if (array [i] [j] == true){
                printf("X");
            } else {
                printf(".");
            }



        }
        printf("\n");
    }
    return 0;
}
