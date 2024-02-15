#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) {
        return 0; // 0 and 1 are not prime
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0; // Not prime
        }
    }
    return 1; // Prime
}

int main() {
    int n, count = 0, num = 2;

    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("The first %d prime numbers are:\n", n);
        while (count < n) {
            if (is_prime(num)) {
                printf("%d ", num);
                count++;
            }
            num++;
        }
        printf("\n");
    }

    return 0;
}

