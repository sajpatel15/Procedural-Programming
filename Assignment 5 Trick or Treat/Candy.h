//
// Created by Saj Patel on 10/26/2019.
//

#ifndef ASSIGNMENT_5_TRICK_OR_TREAT_CANDY_H
#define ASSIGNMENT_5_TRICK_OR_TREAT_CANDY_H


// Defining the struct Candy.h
typedef struct {
    char name[30];
    int weight;
} Candy;

//......................................................................................................................
// Defining all the functions included in Candy.c
Candy random_candy();
void print_candy(Candy c);
void print_final_candy(Candy c);

#endif //ASSIGNMENT_5_TRICK_OR_TREAT_CANDY_H
