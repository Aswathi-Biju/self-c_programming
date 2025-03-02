//Write a program in C to display the sum of the series [ 1 + 11 + 111 + 1111 ... n terms].
#include <stdio.h>

int main() {
    int n, i;
    long long term = 0, sum = 0;

    // Input number of terms
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    // Generate and sum the series
    for (i = 1; i <= n; i++) {
        term = term * 10 + 1; // Generate the next term
        sum += term;          // Add the term to sum
        printf("%lld ", term); // Display each term
        if (i < n) {
            printf("+ ");
        }
    }

    // Display sum
    printf("= %lld\n", sum);

    return 0;
}
