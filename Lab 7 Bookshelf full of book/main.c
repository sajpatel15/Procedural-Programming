#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Author: Saj Patel
 *Lab 7: Bookshelf full of books
 * Worked with: Mathew(Mac), Malcolm, Isabel
 */

// Definition of struct call Book
typedef struct Book {
    char title[100];
    struct Book *next;
}Book;

// Function that prints the books and the shelves
void print_shelf(Book *shelf);
void print_book(Book *book);

int main() {

    // Creating a number of groups
    Book A;
    strcpy(A.title, "War and Peace");
    A.next = NULL;

    Book B;
    strcpy(B.title, "The C Programming Language");
    B.next = NULL;

    Book C;
    strcpy(C.title, "Lucky Jim");
    C.next = NULL;

    Book D;
    strcpy(D.title, "Applied Cryptography");
    D.next = NULL;

    Book E;
    strcpy(E.title, "Sherlock Homes");
    E.next = NULL;

    Book F;
    strcpy(F.title, "Software Runaways");
    F.next = NULL;

    Book G;
    strcpy(G.title, "Taxes Made Easy");
    G.next = NULL;

    Book H;
    strcpy(H.title, "Burning Chrome");
    H.next = NULL;

    Book I;
    strcpy(I.title, "The third World War");
    I.next = NULL;

    // Moving from one book to another in the shelf
    Book *shelf = &A;
    A.next = &B;
    B.next = &C;
    C.next = &D;
    D.next = &E;
    E.next = &F;
    F.next = &G;
    G.next = &H;
    H.next = &I;
    I.next = NULL;

    // Printing out the shelf before the new book is added
    printf("Here is the shelf before inserting new_book\n\n");
    print_shelf(shelf);

    // Adding a new book
    Book new_book;
    strcpy(new_book.title, "Twilight");
    new_book.next  = NULL;

    // Putting the new book on the shelf
    C.next = &new_book;
    new_book.next = &D;

    // Printing out the shelf after added a new book
    printf("\n\nHere is the shelf after inserting new_book\n\n");
    print_shelf(shelf);

    return 0;
}

// Function that prints out only
void print_book(Book *book){
    printf("%s\n", book->title);
}


// Function that prints out the names of the books in whole shelf
void print_shelf(Book *shelf){
    Book *current_book = shelf;
    // Loop that prints the whole shelf
    while(current_book->next != NULL){
        print_book(current_book);
        current_book = current_book->next;
    }
}