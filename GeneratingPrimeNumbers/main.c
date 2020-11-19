#include <stdio.h>
#include <math.h>

//Author: Saj Patel
// Helped by Ben Waters and worked with Miguel
// Date: October 2nd 2019


int main() {
    printf("Generating Prime Numbers!\n");

    printf("Choose a limit (greater than 1): ");
    int limit;
    scanf("%d", &limit);

    int i;
    int j;
    int k;

    if ( limit <= 1){
        printf("Invalid input");
    } else {
        for ( i = 2; i <= limit; ++i) {
            if (i == 2) {
                printf("2 ");
            } else if (i % 2 == 1) {

                for ( j = 2; j <=(int)sqrt(i); ++j) {
                    if (i % j == 0) {
                        k = 0;
                        break;
                    } else {
                        k = 1;
                    }
                }
                if (k == 1){
                    printf("%d ", i);
                }

            }

        }
    }





    return 0;
}