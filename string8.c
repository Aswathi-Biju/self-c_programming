#include<stdio.h>
int main(){
    char string[30];
    int i;
    printf("Enter a text: ");
    scanf("%s",string);
    for(i=0;string[i]!='\0';i++){
        if(string[i]>='a' && string[i]<='z'){
            string[i]=string[i]-32;
        }
        else if(string[i]>='A' && string[i]<='Z'){
            string[i]=string[i]+32;
        }
    }
    printf("%s", string);
    return 0;
}