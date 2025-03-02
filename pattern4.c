#include <stdio.h>

// Function to calculate factorial
long long factorial(int num) {
    long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate binomial coefficient (nCr)
long long binomialCoeff(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int rows, i, j;
    
    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate Pascal's Triangle
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("%lld ", binomialCoeff(i, j));
        }
        printf("\n");
    }

    return 0;
}
