#include<stdio.h>
int main(){
    int num, largest=0,rem;
    printf("Enter a number:");
    scanf("%d",&num);
    while (num!=0){
        rem=num%10;
        if (rem>largest){
            largest=rem;
        }
        num/=10;    
    }
    printf("The largest digit is %d\n", largest);
    return 0;
}