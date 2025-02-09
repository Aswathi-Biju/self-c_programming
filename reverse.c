#include<stdio.h>
int main(){
    int num, rev,rem;
    printf("Enter a number: ");
    scanf("%d",&num);
    rev=0;
    printf("The reverse of %d is ",num);
    for (;num!=0;num=num/10){
        rem=num%10;
        rev=rev*10+rem;
        printf("%d\n",rev);
        printf("%d\n",rem);       
    }
    //printf("%d",rev);//
    return 0;
}
