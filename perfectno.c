//Write a C program to check whether a number is Perfect number or not.
#include<stdio.h>
int main(){
    int num,i,perfect=0;
    printf("Enter a no.:\n");
    scanf("%d",&num);
    for(i=1;i<num;i++){
        if(num%i==0){
            perfect=perfect+i;
            
        }
    }
    if(perfect==num){
        printf("%d is a perfect number.", num);
    }else{
        printf("%d is not a perfect number.", num);
    }
    return 0;
}