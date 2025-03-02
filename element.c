#include<stdio.h>
#include<string.h>
int main(){
    char key[20];
    int i,n,element=1;
    printf("Enter the no. of rows:\n");
    scanf("%d",&n);
    char array[n][20];
    printf("Enter array of %d:\n",n);
    for(i=0;i<n;i++){
        scanf("%s",array[i]);
    }
    printf("The value of array:\n");
    for(i=0;i<n;i++){
        printf("%s\n",array[i]);
    }
    printf("Enter the element to find:\n");
    scanf("%s",key);
    for(i=0;i<n;i++){
        if(strcmp(key,array[i])!=0){
            element=0;
            break;
        }
    }
    if(element==1){
        printf("%s is in the array",key);
    }else{
        printf("%s is not in the array", key);
    }
    return 0;
}