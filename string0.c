#include<stdio.h>
int main(){
    char string[20];
    printf("Enter a string:\n");
    scanf("%[^\n]",string);
    printf("The string is: %s\n",string);
    return 0;
}