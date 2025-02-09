#include<stdio.h>
int main(){
    int num, rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        printf("%d\n",rem);
        num/=10;
    }
    return 0;
}