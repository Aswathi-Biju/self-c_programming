//Write a program in C to find HCF of two numbers.
#include<stdio.h>
int main(){
    int n1,n2,i,hcf=0;
    printf("Enter a no.:\n");
    scanf("%d %d",&n1,&n2);
    
    if(n1>n2){
        for(i=1;i<=n2;i++){
            if(n1%i==0 && n2%i==0){
                hcf=i;
            }
        }
    }else{
        for(i=1;i<=n1;i++){
            if(n1%i==0 && n2%i==0){
                hcf=i;
            }
        }
    }  
    printf("HCF of %d and %d is %d",n1,n2,hcf);
    return 0;
}