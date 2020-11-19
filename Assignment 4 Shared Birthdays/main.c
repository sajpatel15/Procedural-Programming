#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

/* Author Saj Patel
 * worked with: Miguel Turcios and helped by Ben Dosset
 * visited office hours
 */

// this is where both the functions are initialized.
bool trials(int num_people_in_room);

int experiment(int num_people_in_room, int num_trials);

//......................................................................................................................

// this is the main function where all other functions are called on.
int main() {
    printf("Shared Birthdays!\n");

    printf("What threshold would you like? (enter a percent) ");
    double threshold;
    scanf("%lf", &threshold);

    // statement thst checks if the percentage is within bounds.
    if (threshold < 0 || threshold > 100) {
        printf("Error: Not a valid percent.");
        return 0;
    }

    int successful_trials = 0.0;
    double successful_percentage = 0.0;
    int num_trials = 100000;
    int people = 0;

    // loop checks the probability of a shared birthday
    for (people = 2; successful_percentage <= threshold  ; ++people) {
        successful_trials = (experiment(people, num_trials));   // calls on the function experiment
        successful_percentage = ((double) successful_trials) / num_trials *100; // converts experiment to percentage
        printf("For %d people, the probability of a shared birthday was %d/%d or %.2lf%%\n", people,
               successful_trials, num_trials, successful_percentage);
    }
    // final print statement showing the results.
    printf("To achieve at least %.2lf%% probability of a collision, need %d people in the room.", threshold,
           people - 1);
    return 0;
}
//......................................................................................................................

// first function to perform a single a single loop of the Bernoulli trial
bool trials(int num_people_in_room) {
    // making array false for all days
    bool days[365];
    for (int i = 0; i < 365; ++i) {
        days[i] = false;
    }
    // loops to check if a pair of birthdays are the same
    for (int i = 0; i < num_people_in_room; ++i) {
        int birthday = rand() % 365;
        if (days[birthday]) {
            return true;
        } else {
            days[birthday] = true;
        }
    }
    return false;
}

//......................................................................................................................

// Second function that conducts repeated trials of the Bernoulli experiment
int experiment(int num_people_in_room, int num_trials) {
    int counter = 0;

    // loop that counts the number of successful trials.
    for (int i = 0; i < num_trials; ++i) {
        if (trials(num_people_in_room)) {
            ++counter;
        }
    }
    // the counter returns a value f successful trials to the experiment
    return counter;
}



