#include<stdio.h>
void revnum(int *num) {
    int reversed = 0;
    int n = *num;
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }
    *num = reversed; 
}
int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    revnum(&number); 
    printf("Reversed number: %d\n", number);
    return 0;
}
