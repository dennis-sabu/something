#include <stdio.h>

void main() {
    int n, i, count = 0, num = 2, isprime;

    printf("Enter the number of prime numbers you need to print: ");
    scanf("%d", &n);

    while (count < n) {
        isprime = 1; // vicharic it is a prime

        for (i = 2; i * i <= num; i++) { // sqr num nok
            if (num % i == 0) {
                isprime = 0;
                break;
            }
        }

        if (isprime) {
            printf("%d ", num);
            count++;
        }
        num++;
    }
}
