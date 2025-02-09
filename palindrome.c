#include<stdio.h>
int main(){
    int num,rev,rem,or_num;
    printf("Enter a number: ");
    scanf("%d",&num);
    or_num=num;
    for(rev=0;num!=0;num=num/10){
        rem=num%10;
        rev=rev*10+rem;
    }
    if(or_num==rev){
        printf("The palindrome no of %d is %d",or_num,rev);
    } else{
        printf("%d is not palindrome no",or_num);
    }
    return 0;
}