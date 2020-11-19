#include <stdio.h>
#include <ctype.h>
#include <string.h>
/* Author: Saj Patel
 * Worked with luis, Vaughn and jesse and miguel
 * looked up how to read the dashes online and used the function '/n' to when scanning.
 * Also went to office hours for help
 */

int main() {
    printf("ISBN Validator \n");

// Prompting the user to enter ISBN
    printf("Please enter an ISBN: ");
     char ISBN[20];
    scanf("%[^\n]s", ISBN);
    printf("The input '%s' is: \n", ISBN);

    // Defining the variables
    int validDigits = 0;
    int coefficient = 10;
    int checksum_ISBN10 = 0;
    int checksum_ISBN13 = 0;

    // loop to show that there are to many X's in the ISBN else carries on with ISBN validation
    int numXcount = 0;
    for(int i = 0; ISBN[i] != '\0'; ++i){
            if (ISBN[i] == 'X' || ISBN[i] == 'x') {
              ++numXcount;
            }
    }
    if (numXcount > 1){
        printf("Invalid number of Xs\n");
        printf("Invalid ISBN-10\n");
        printf("Invalid ISBN-13\n");
    } else {
        // looping the string character by character stopping when a NUL character is seen for ISBN-10
             for (int i = 0; ISBN[i] != '\0'; ++i) {
            if (isdigit(ISBN[i])) { // checks if if each value entered in the ISBN is a digit
                ++validDigits;
                checksum_ISBN10 += coefficient * (ISBN[i] - '0'); // Converts ASCII correctly
                --coefficient; // reduces the coefficient by 1
                checksum_ISBN10 %= 11;

                // Checks whether the last number if it has an X
            } else if (ISBN[i] == 'X' || ISBN[i] == 'x') {
                if (validDigits == 9) {
                    ++validDigits;
                    checksum_ISBN10 += 10;
                    --coefficient; // reduces the coefficient by 1
                    checksum_ISBN10 %= 11; // checks if the digits mod by 11 equals 0
                } else {
                    validDigits = -1;
                    break;
                }
            }
        }
        // Prints to shows whether the input is a valid or invalid ISBN-10
        if (validDigits == 10 && checksum_ISBN10 == 0) {
            printf("Valid ISBN-10\n");
        } else {
            printf("Invalid ISBN-10\n");
        }
        // looping the string character by character stopping when a NUL character is seen for ISBN-13
        for (int i = 0; ISBN[i] = '\0'; ++i) {
            if (isdigit(ISBN[i])) {
                if (i % 2 == 0) {
                    ++validDigits;
                    checksum_ISBN13 += (ISBN[i] - '0'); // the -'0' is used to covert from ASCII to computable values
                    checksum_ISBN13 %= 10;
                } else if (i % 2 == 1) {
                    ++validDigits;
                    checksum_ISBN13 +=
                            3 * (ISBN[i] - '0'); // the -'0' is used to covert from ASCII to computable values
                    checksum_ISBN13 %= 10;
                } else {
                    validDigits = -1;
                    break;
                }
            }
        }
        // Prints to shows whether the input is a valid or invalid ISBN-13
        if (validDigits == 13 && checksum_ISBN13 == 0) {
            printf("Valid ISBN-13\n");
        } else {
            printf("Invalid ISBN-13\n");
        }
    }
    return 0;
}