#include<stdio.h>
int main(){
    int row,col,i,j;
    printf("Enter a no. for row and coloumn:\n");
    scanf("%d\n%d",&row,&col);
    int matrix[row][col];
    if(row==col){
        printf("The matrix is a suqare matrix\n");
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
        for(i=0;i<row;i++){
            for(j=0;j<col;j++){
                if((i==j && matrix[i][j]==1)||(i!=j && matrix[i][j]==0)){
                    printf("The matrix is an identity matrix\n");
                    return 0;
                }else{
                    printf("The matrix is not an identity matrix\n");
                    return 0;
                }
            }
        }
    }else{
        printf("The matrix is not a square matrix, so can determine identity matrix\n");
    }
    return 0;
}