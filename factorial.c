//Write a C program to calculate the factorial of a given number using a while loop. 
//Validate the input to ensure it is a positive integer.
#include<stdio.h>
int main(){
    int num,i=1,factorial=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num<0){
        printf("%d is not a positive no. \n");
    }else{
        while(i<=num){
            factorial*=i;
            i++;
        }
        printf("The factorial of %d is %d\n", num, factorial);
    }

    return 0;
}