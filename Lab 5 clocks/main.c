#include <stdio.h>

/* Lab 5: Clocks
 * Author: Saj Patel
 * Worked with Isabel, Mathew, Miguel and John.
 */

// struct for a clock that consists of three integers
typedef struct {

    int  hours;
    int minutes;
    int seconds;
}clock;
//......................................................................................................................

// definitions of all the functions
clock create_clock(int h, int m, int s);
void print_clock (clock c);
int elapsed_seconds(clock start, clock end);

//......................................................................................................................
int main() {
    printf("Lab-5 Clocks \n");

    // calling on a function to create two clocks
    clock start = create_clock(3, 15, 20);
    clock end = create_clock(7, 2, 55);

    // producing the whole output for the clocks and time elapsed
    printf("Start time:\n");
    print_clock(start);
    printf("End time:\n");
    print_clock(end);
    printf("Elapsed time in seconds = %d seconds", elapsed_seconds(start, end));
    return 0;
}
//......................................................................................................................

// function that creates the clock
clock create_clock(int h, int m, int s){
    clock c;

    // series of if statements making sure the input is within range
    if (h > 23){
        h = 23;
    } else if (h < 0){
        h = 0;
    }
    if ( m > 59 ){
        m = 59;
    } else if ( m < 0){
        m = 0;
    }
    if(s > 59){
        s = 59;
    } else if (s < 0){
        s = 0;
    }
    c.hours = h;
    c.minutes = m;
    c.seconds = s;

    return c;
}
//......................................................................................................................

// function that prints the clock
void print_clock (clock c){
    printf("%d : %d : %d\n", c.hours, c.minutes, c.seconds);
}
//......................................................................................................................


// function that calculates the time elapsed from start to end.
int elapsed_seconds(clock start, clock end){
    int  elapsed_start = (start.hours * 3600) + (start.minutes * 60) + start.seconds;
    int elapsed_end = (end.hours * 3600) + (end.minutes * 60) + end.seconds;
        return (elapsed_end - elapsed_start);
}
//......................................................................................................................

