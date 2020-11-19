//
// Created by Saj Patel on 10/26/2019.
//

#include "Candy.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//......................................................................................................................
// Creating an array that stored all the candy names
const char CANDY_NAMES[][30] = {
        "Atomic Fireball","Baby Ruth","Bit-O-Honey","Bottle Caps","Butterfinger","Dots","Gobstoppers","Good & Plenty",
        "Haribo Gummi Bears","Jolly Ranchers","Jujyfruits","Junior Mints","Kit-Kat","Laffy Taffy","Lemonhead",
        "Lifesavers","M&Ms","Mike & Ike","Milk Duds","Milky Way","Nerds","Nestle Crunch","Pop Rocks",
        "Reese's Peanut Butter Cups","Rolo","Runts","Snickers","Skittles","Smarties","Sour Patch Kids","Starburst",
        "Swedish Fish","SweeTarts","Three Musketeers","Tootsie Rolls","Twix","Twizzlers","Warheads","Whoppers",
};
// Integer that shows the total value of candies in the array above
const int NUM_CANDY_NAMES = 39;
//......................................................................................................................

// Function that creates a random
Candy random_candy(){
    //defining the Candy c
    Candy c;

    // picking a random name from the Candy
    strcpy (c.name, CANDY_NAMES[rand() % NUM_CANDY_NAMES]);
    c.weight = (rand() % 10) + 6;

    return c;
}
//......................................................................................................................

// Function that prints out the candy c
void print_candy(Candy c){
    printf("You received a %s @ %d oz \n", c.name, c.weight);
}
//......................................................................................................................
    // Another function that prints out the list of candies in the end(final haul).
void print_final_candy(Candy c){
    printf("%s @ %d oz\n", c.name, c.weight );
}



