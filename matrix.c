#include<stdio.h>
int main(){
    int row,col,i,j;
    printf("Enter a no. for row and coloumn:\n");
    scanf("%d\n%d", &row,&col);
    int array[row][col];
    printf("Enter element values for matrix:\n");
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &array[i][j]);   
        }
    }
    printf("The elements for matrix:\n");
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t", array[i][j]);   
        }
        printf("\n");
    }
    return 0;
}