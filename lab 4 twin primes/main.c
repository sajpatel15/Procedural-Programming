#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int n);

int main() {
    printf("Generating Twin Primes ");
    printf("Choose a limit (greater than 2): ");
    int limit;
    scanf("%d", &limit);

    for (int i = 3; i <= limit - 2; ++i){
        if(is_prime(i) && is_prime(i + 2)){
            printf("(%d, %d) ", i, i+2);
        }
    }

    return 0;
}

bool is_prime(int n){

    bool isprime = true;

                for (int j = 2; j <= (int) sqrt(n); ++j) {
                    if (n % j == 0) {
                        isprime = false;
                        break;
                    }
                }




       return isprime;
    }



