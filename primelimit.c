//1. Write a program to find prime numbers within a limit using loops.
#include<stdio.h>
int main(){
    int limit,i,j,is_prime;
    printf("Enter a number: ");
    scanf("%d",&limit);
    printf("The prime nos upto the limit %d are: \n",limit);
    for (i=2;i<=limit;i++){
        is_prime=1;
        for (j=2; j*j <=i; j++)
        {
            if(i%j==0){
                is_prime=0;
                break;
            }
        }
        if(is_prime){
            printf("%d\n",i);
        }
    }
    return 0;
}