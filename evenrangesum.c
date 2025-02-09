//Write a C program to find sum of even numbers in a given range.(Exclusive of limit)
#include<stdio.h>
int main(){
    int limit,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&limit);
    printf("The even nos upto the limit %d are: \n",limit);
    for (i=2;i<=limit;i+=2) {
        printf("%d\n",i);
        sum+=i;
    }
    printf("And there sum is %d",sum);
    return 0;
}