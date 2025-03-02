#include <stdio.h>

int main() {
    int i, j, num = 1, rows;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Generate pattern
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", num);
            num++;  // Increment the number
        }
        printf("\n");  // Move to the next row
    }

    return 0;
}
