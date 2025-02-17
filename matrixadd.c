#include<stdio.h>
int main(){
    int row1,row2,col1,col2,i,j;
    printf("Enter a  two no. for row:\n");
    scanf("%d\n%d", &row1,&row2);
    printf("Enter a  two no. for columns:\n");
    scanf("%d\n%d", &col1,&col2);
    //reading and printing matrix 1
    int a[row1][col1];
    printf("Enter element values for matrix1:\n");
    for (i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            scanf("%d", &a[i][j]);   
        }
    }
    printf("The elements for matrix1:\n");
    for (i=0;i<row1;i++){
        for(j=0;j<col1;j++){
            printf("%d\t", a[i][j]);   
        }
        printf("\n");
    }
    //reading and printing matrix 2
    int b[row2][col2];
    printf("Enter element values for matrix2:\n");
    for (i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            scanf("%d", &b[i][j]);   
        }
    }
    printf("The elements for matrix2:\n");
    for (i=0;i<row2;i++){
        for(j=0;j<col2;j++){
            printf("%d\t", b[i][j]);   
        }
        printf("\n");
    }
    //now sum=matrix1+matrix2
    if (row1==row2 && col1==col2){
        int c[row1][col1];
        for (i=0;i<row1;i++){
            for(j=0;j<col1;j++){
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("The sum of matrix is:\n");
        for(i=0;i<row1;i++) {
            for(j=0;j<col1;j++){
                printf("%d\t", c[i][j]);   
            }
            printf("\n");
        }
    } else{
        printf("Invalid matrix addition");
    }
    return 0;
}