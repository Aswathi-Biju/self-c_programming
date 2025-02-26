#include<stdio.h>
int main(){
    char string[30], temp;
    int i,j,length;
    printf("Enter the string:\n");
    scanf("%[^\n]", string);
    for(length=0;string[length]!='\0';length++) ;
    i= length-1;
    for(j=0;j<length/2;j++,i--) {
        temp=string[i];
        string[i]=string[j];
        string[j]=temp;
    }
    printf("Reverse string:\n");
    printf("%s",string);
    return 0;
}