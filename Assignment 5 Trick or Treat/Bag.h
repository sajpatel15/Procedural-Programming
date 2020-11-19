//
// Created by Saj Patel on 10/28/2019.
//

#ifndef ASSIGNMENT_5_TRICK_OR_TREAT_BAG_H
#define ASSIGNMENT_5_TRICK_OR_TREAT_BAG_H

#include "Candy.h"

// Defining the struct Bag.h
typedef struct {
    Candy contents [100];
    int items;
    int weight;
    int capacity;
} Bag;

//......................................................................................................................
// Defining all the functions included in Bag.c

Bag create_bag (int max_capacity);
Bag add_candy (Bag b, Candy c);
void print_bag_summary(Bag b);
void print_bag_full(Bag b);
#endif //ASSIGNMENT_5_TRICK_OR_TREAT_BAG_H
