#include<stdio.h>
int max(int,int);
int main(){
    int x,y;
    printf("The largest no is: %d", max(x,y));
    return 0;
}
int max(int a, int b){ 
    printf("Enter two nos.:\n");
    scanf("%d,%d",&a,&b);
    if(a>b){
        return max(a,b);
    }
}
