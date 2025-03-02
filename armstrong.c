//Write C program to find Armstrong numbers between 1 to n
#include<stdio.h>
#include<math.h>
int main(){
    int num,n,temp,count;
    printf("Enter a number for n:\n");
    scanf("%d",&n);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, remainder, sum, n, digits;

    // Input upper limit
    printf("Enter the upper limit (n): ");
    scanf("%d", &n);

    printf("Armstrong numbers between 1 and %d are:\n", n);

    // Iterate through each number from 1 to n
    for (num = 1; num <= n; num++) {
        temp = num;
        sum = 0;
        
        // Count the number of digits
        digits = 0;
        int count_temp = num;
        while (count_temp > 0) {
            count_temp /= 10;
            digits++;
        }

        // Calculate sum of digits raised to the power of digits
        temp = num;
        while (temp > 0) {
            remainder = temp % 10;
            sum += pow(remainder, digits);
            temp /= 10;
        }

        // Check if it's an Armstrong number
        if (sum == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
