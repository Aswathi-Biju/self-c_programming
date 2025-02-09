// Write a C Program to check Whether a Character is Vowel or Consonant.
#include<stdio.h>
int main(){
    char char_value;
    printf("Enter an alphabet: ");
    scanf(" %c",&char_value);
    switch(char_value){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        printf(" %c is a vowel\n", char_value);
        break;
        default:
        printf(" %c is a consonant\n", char_value);
        break;
    }
    return 0;
}