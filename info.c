#include<stdio.h>
int main(){
    int roll_no, age;
    float height;
    char grade;
    char user_name[50];
    printf("Enter ur name: ");
    scanf("%s",&user_name);
    printf("Enter ur roll no: ");
    scanf("%d", &roll_no);
    printf("Enter ur age: ");
    scanf("%d", &age);
    printf("Enter ur height (in cm): ");
    scanf("%f", &height);
    printf("Enter ur grade: ");
    scanf(" %c", &grade);
    printf("Ur name is %s, roll no is %d, age is %d, height is %.2f cm, and grade is  %c \n", user_name,roll_no,age,height,grade);
    return 0;
}