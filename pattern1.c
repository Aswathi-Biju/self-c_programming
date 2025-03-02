/*1 
	0 1
	1 0 1 
	0 1 0 1 
	1 0 1 0 1
*/
#include <stdio.h>

int main() {
    int i, j, n;
    
    // Take input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {  // Loop for rows
        for (j = 0; j <= i; j++) {  // Loop for columns
            if ((i + j) % 2 == 0) {  // Alternating condition
                printf("1 ");
            } else {
                printf("0 ");
            }
        }
        printf("\n"); // Move to next line
    }

    return 0;
}
