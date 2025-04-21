#include<stdio.h>
int reverse(int num){
    int rev=0, rem;
    while (num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    return rev;
}
int factorial(int num){
    int res=1;
    for(int i=1;i<=num;i++){
        res*=i;
    }
    return res;
}
int prime(int num){
    if(num<=1){
        return 0;
    }
    for (int i=2;i*i<=num;i++){
        if (num%i==0){
            return 0;
        }
    }
    return 1;
}
int evorodd(int num){
    if (num%2==0){
        return 1;
    }else{
        return 0;
    }
}
int main(){
    int choice,num;
    while(1){
        printf("Operation:\n");
        printf("1. Reverse\n");
        printf("2. Factorial\n");
        printf("3. Prime\n");
        printf("4. Even or Odd\n");
        printf("5. Exit\n");
        printf("Enter a no. of choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            printf("Enter a number to reverse it: ");
            scanf("%d",&num);
            printf("The reverse of the no. is %d\n",reverse(num));
            break;
            case 2:
            printf("Enter a number to gets it's factorial: ");
            scanf("%d",&num);
            printf("The factorial of the no. is %d\n",factorial(num));
            break;
            case 3:
            printf("Enter a number to check whether it's prime or not: ");
            scanf("%d",&num);
            if (prime(num)==1) {
                printf("%d is a prime no.\n",num);
            }else{
                printf("%d is not a prime no.\n",num);
            }  
            break;
            case 4:
            printf("Enter a number to check whether it's even or odd: ");
            scanf("%d",&num);
            if (evorodd(num)==1) {
                printf("%d is a even no.\n",num);
            }else{
                printf("%d is a odd no.\n",num);
            }  
            break;
            case 5:
            return 0;
            printf("Exiting the operation...\n");
            break;
            default:
            printf("Inavlid Choice\n");
            break;
        }
    }
    return 0;
}
