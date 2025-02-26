#include<stdio.h>
int main(){
    char string[30], temp;
    int i,j,length, same=1;
    printf("Enter the string:\n");
    scanf("%[^\n]", string);
    for(length=0;string[length]!='\0';length++) ;
    i= length-1;
    j=0;
    for( ;j<length/2;j++,i--) {
        if(string[i]!=string[j]){
            same=0;
            break;
        }
    }
    if(same==1){
        printf("The string \"%s\" is palindrome");
    }else{
        printf("The string \"%s\" is not a palindrome");
    }
    return 0;
}