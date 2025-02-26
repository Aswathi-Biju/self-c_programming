#include <stdio.h>
#include<string.h>
int main(){
    char str1[30],str2[30];
    printf("Enter the text:\n");
    gets(str1);
    printf("Enter the text:\n");
    gets(str2);
    if(strcmp(str1,str2)==0)
         printf("The two strings are the same\n");
    else
        printf("Both the strings are not equal\n");
    return 0;

}
