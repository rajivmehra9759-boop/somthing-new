#include <stdio.h>
int main()
{
    int n, i, isPrime;

    printf("Prime numbers from 1 to 100:\n");
    for(n = 2; n <= 100; n++) {
        isPrime = 1; // Assume n is prime
        for(i = 2; i <= n/2; i++) {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
            printf("%d ", n);
    }
    printf("\n");
    return 0;
}