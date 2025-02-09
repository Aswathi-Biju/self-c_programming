#include<stdio.h>
#include<math.h>
int main(){
    int num,or_num,count,rem,armstrong_no;
    count=0;
    armstrong_no=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    or_num=num;
    while(or_num!=0){
        or_num/=10;
        count++;
    }
    or_num=num;
    while(or_num!=0){
        rem=or_num%10;
        armstrong_no+=(int)pow(rem,count);
        or_num/=10;
    }
    printf("%d", armstrong_no);
    if(armstrong_no==num){
        printf("%d is an armstrong no\n",num);
    } else{
        printf("%d is not an armstrong no\n",num);
    }
    return 0;
}