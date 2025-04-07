#include<stdio.h>
struct MyStructure{
    char s_char;
    int s_int;
    float s_float;
}s;
union MyUnion{
    char u_char;
    int u_int;
    float u_float;
}u;
int main(){
    printf("The size of Structure: %d bytes\n", sizeof(s));
    printf("The size of Union: %d bytes\n", sizeof(u));
    printf("Enter the char, int, float values for structure\n");
    scanf(" %c %d %f",&s.s_char,&s.s_int,&s.s_float);
    printf("Enter the char, int, float values for union\n");
    scanf(" %c %d %f",&u.u_char,&u.u_int,&u.u_float);
    printf("The values inside Structure\n");
    printf("char:\t int:\t float:\n");
    printf("%c\t %d\t %.2f\n",s.s_char,s.s_int,s.s_float);
    printf("The values inside Union\n");
    printf("char:\t int:\t float:\n");
    printf("%c\t %d\t %.2f\n",u.u_char,u.u_int,u.u_float);
    return 0;
}
