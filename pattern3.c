#include <stdio.h>

int main() {
    int i, j, n;

    // Take input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {  // Loop for rows
        for (j = 1; j <= i; j++) {  // Loop for columns
            printf("%d ", j);
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
