#include<stdio.h>
int add(int,int);
int main(){
    int x,y,result;
    result=add(x,y);
    printf("The sum is %d\n",result);
    return 0;
}
int add(int a, int b){
    int sum=0;
    printf("Enter two values: ");
    scanf("%d,%d",&a,&b);
    sum=a+b;
    return sum;
}
