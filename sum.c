//Write a program in C to find sum of series.
#include<stdio.h>
int main(){
    
    return 0;
}
#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;
        printf("1/%d ", i);
        if (i < n) {
            printf("+ ");
        }
    }
    
    printf("= %.5lf\n", sum);
    
    return 0;
}
