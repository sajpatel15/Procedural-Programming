#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include "Candy.h"
#include "Bag.h"
//......................................................................................................................
/*Assignment 5: Trick or Treat
 * Author: Saj Patel
 * Worked with: Ryan, miguel and visited office hours
 */

// defining the functions
bool still_trick_or_treat();
//......................................................................................................................
int main() {

    // Improved random number generator by using srand
    srand((unsigned int) time(0));

    printf("Assignment 5: Trick or treat\n");

    // initializing and defining the max and target capacity
    const int max_capacity = 100;
    const int target_capacity = 90;

    // printing starting statement
    printf("Let's go trick or treating! Your bag can hold at most %d oz. Try to get at least %d oz of candy!\n",
           max_capacity, target_capacity);

    // Importing the bag struct and printing the initial bag summary
    Bag b = create_bag(max_capacity);
    print_bag_summary(b);

    // loop that prints gets a random candy and prints the content of the bag
    // when ever function still_trick_or_treat is true
    while (still_trick_or_treat()) {
        Candy c = random_candy();
        print_candy(c);
        b = add_candy(b, c);
        print_bag_summary(b);

        // Statement that breaks the loop if the weight of the bag goes above its max capacity
        if (b.weight > max_capacity) {
            break;
        }
    }

    // series of if, and if-else statements checking to contents of the bag for a win or lose
    if (b.weight <= target_capacity) {
        // loss
        printf("You lost. You didn't get enough candy.\n");
    } else if (b.weight > max_capacity) {
        printf("Oh no! Your bag was overstuffed with too much candy and it split and you lost it all!\n"
               "You lost.\n");
    } else {
        // win
        printf("You win!\n");
        print_bag_full(b);
    }

    return 0;
}
//......................................................................................................................
// Function that return true when ever the user input is a "Y" or a "y"
bool still_trick_or_treat() {
    for (;;) {

        // scanning for a user input
        printf("Would you like to go to another house? (Y/N)");
        char response[21];
        scanf("%20s", response);
        response[20] = '\0';

        // returns true if answer is yes returns false if no repeats question otherwise
        if ((strcmp)(response, "Y") == 0 || (strcmp)(response, "y") == 0) {
            return true;
        } else if (strcmp(response, "N") == 0 || strcmp(response, "n") == 0) {
            return false;
        } else {
            printf("Please enter only Y or N\n");
        }
    }
}
//......................................................................................................................