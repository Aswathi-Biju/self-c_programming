#include<stdio.h>

void create(int r, int c, int mat[r][c]){
    printf("Inserting the elements in matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&mat[i][j]);
        }
    }
}

void display(int r, int c, int mat[r][c]){
    printf("Displaying the elements of matrix\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
}

void sum(int r1, int c1, int a[r1][c1], int b[r1][c1]){
    int res[r1][c1];
    if(r1==r1 && c1==c1){
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                res[i][j]=a[i][j]+b[i][j];
            }
        }
        printf("Sum of matrices:\n");
        display(r1,c1,res);
    } else {
        printf("Addition not possible\n");
    }
}

void multiply(int r1, int c1, int a[r1][c1], int r2, int c2, int b[r2][c2]){
    if(c1!=r2){
        printf("Multiplication not possible\n");
        return;
    }
    int res[r1][c2];
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            res[i][j]=0;
            for(int k=0;k<c1;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("Multiplication of matrices:\n");
    display(r1,c2,res);
}

int main(){
    int choice,r1,c1,r2,c2;
    printf("Enter the rows and coloumns for matrix a: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the rows and coloumns for matrix b: ");
    scanf("%d %d",&r2,&c2);
    int a[r1][c1],b[r2][c2];
    while(1){
        printf("Array Operation:\n");
        printf("1. Create two matrices\n");
        printf("2. Display the two matrices\n");
        printf("3. Sum of matrices\n");
        printf("4. Multiplication of matrices\n");
        printf("5. Exit\n");
        printf("Enter a no. of choice: ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            create(r1,c1,a);
            create(r2,c2,b);
            break;
            case 2:
            display(r1,c1,a);
            display(r2,c2,b);
            break;
            case 3:
            if(r1==r2 && c1==c2)
                sum(r1,c1,a,b);
            else
                printf("Addition not possible due to dimension mismatch\n");
            break;
            case 4:
            multiply(r1,c1,a,r2,c2,b);
            break;
            case 5:
            return 0;
            default:
            printf("Invalid Choice\n");
            break;
        }
    }
    return 0;
}
