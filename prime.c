#include<stdio.h>
int main(){
    int num,i=2,is_prime=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for(;i<=num/2;i++){
        if(num%i==0){
            is_prime=0; 
            break;
        }
    }
    if(is_prime){
            printf("%d is a prime no.\n", num);
        }else{
            printf("%d is not a prime no.\n", num);
        }
    return 0;
}