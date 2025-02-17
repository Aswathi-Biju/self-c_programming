#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a no.: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter element values for array:\n");
    for (i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    printf("The elements for array:\n");
    for (i=0;i<n;i++){
        printf("%d\t", array[i]);
    }
    return 0;
}