#include<stdio.h>
int main(){
    int row,col,i,j;
    printf("Enter a no. for row and coloumn:\n");
    scanf("%d\n%d", &row,&col);
    int matrix[row][col];
    printf("Enter element values for matrix:\n");
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d", &matrix[i][j]);   
        }
    }
    printf("The elements for matrix:\n");
    for (i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d\t", matrix[i][j]);   
        }
        printf("\n");
    }
    printf("Transpose matrix:\n");
    for(i=0;i<col;i++){
        for(j=0;j<row;j++){
            printf("%d\t",matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}