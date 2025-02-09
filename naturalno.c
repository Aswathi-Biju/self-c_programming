#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<=0){
        printf("Not a natural number \n");
    }
    printf("The first %d natural nos. are: \n",n);
    i=1;
    while (i<=n) {
        printf("%d\n",i);
        i++;
    }
    return 0;
}