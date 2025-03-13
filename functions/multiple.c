#include<stdio.h>
int multiply(int,int);
int main(){
    int x,y,result;
    result=multiply(x,y);
    printf("The multiplication result is %d\n",result);
    return 0;
}
int multiply(int a, int b){
    int multiple=0;
    printf("Enter two values: ");
    scanf("%d,%d", &a, &b);
    multiple=a*b;
    return multiple;
}
