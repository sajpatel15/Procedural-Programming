//
// Created by Saj Patel on 10/28/2019.
//

#include "Bag.h"
#include "Candy.h"
#include <stdio.h>


Bag create_bag (int max_capacity){
    Bag b;
    b.weight = 0;
    b.items = 0;
    b.capacity = max_capacity;
    return b;
}

Bag add_candy (Bag b, Candy c){
    b.contents[b.items] = c;
    ++b.items;
    b.weight += c.weight;
    return b;
}

void print_bag_summary(Bag b){
    printf("Your bag currently has %d items weighing %d / %d oz\n", b.items, b.weight, b.capacity);
}

void print_bag_full(Bag b){

    printf("Your final haul:\n");
    print_bag_summary(b);

    for (int i = 0; i < b.items; ++i) {
        print_final_candy(b.contents[i]);
    }

}


