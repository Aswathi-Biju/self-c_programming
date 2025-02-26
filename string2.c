#include<stdio.h>
int main(){
    char string[30],c_string[30];
    int i;
    printf("Enter a string:\n");
    scanf("%[^\n]", string);
    printf("Now copying the contents of the sting to another:\n");
    for (i=0;string[i]!='\0';i++){
        c_string[i]=string[i];
    }
    c_string[i] = '\0';
    printf("%s", c_string);
    return 0;
}