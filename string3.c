#include<stdio.h>
int main(){
    char string1[30], string2[30];
    int i, same=1;
    printf("Enter string 1:\n");
    scanf("%s", string1);
    printf("Enter string 2:\n");
    scanf("%s", string2);
    printf("Now let's compare the two strings\n");
    for(i=0;string1[i]!='\0' || string2[i]!='\0';i++){
        if(string1[i]!=string2[i]){
            same=0;
        }
    }
    if (same==1){
        printf("The strings are same");
    }else{
        printf("Both the strings are not same");
    }
    return 0;
}