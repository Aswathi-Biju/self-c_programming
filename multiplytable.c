//3.Write a program in C to display the multiplication table from 1 to 5.
#include<stdio.h>
int main(){
    int i,j,k,start,end;
    printf("Enter a no. for start and end for the table: ");
    scanf("%d,%d",&start,&end);
    for (i=1;i<=10;i++){
        for(j=start;j<=end;j++){
            k=i*j;
            printf("%d*%d=%d\t",j,i,k);
        }
        printf("\n");
    }
    return 0;
}
