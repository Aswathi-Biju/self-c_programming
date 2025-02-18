#include<stdio.h>
int main(){
	int row,col,i,j;
	printf("Enter values for row and coloumn:\n");
	scanf("%d\n%d",&row,&col);
	int matrix[row][col];
	printf("Enter values for matrix \n");
	if(row!=col){
		printf("Matrix is not square so can't find symmetry");
	}else{
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				scanf("%d",&matrix[i][j]);
			}
		}
		printf("Values for matrix \n");
		for(i=0;i<row;i++){
			for(j=0;j<col;j++){
				printf("%d\t",matrix[i][j]);
			}
			printf("\n");
		}
		printf("Values of Transpose matrix \n");
		for(i=0;i<col;i++){
			for(j=0;j<row;j++){
				printf("%d\t",matrix[j][i]);
			}
			printf("\n");
		}	
		for(i=0;i<row;i++){
			for(j=0;j<row;j++){
				if(matrix[i][j]==matrix[j][i]){
					printf("the matrix is symmetric\n");
					return 0;
				}else{
					printf("the matrix is not symmetric\n");
					return 0;
				}
			}
		}
	}
	return 0;
}
