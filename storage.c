#include <stdio.h>
int ext=10;
void demonstrateStorage() {
    auto int a=1;          
    static int s=1;        
    a++;
    s++;
    printf("auto variable a = %d\n", a);
    printf("static variable b = %d\n", s);
}
void demonstrateRegister() {
    register int r=5;      
    printf("register variable r = %d\n", r);
}
void demonstrateExtern() {
    extern int ext;  
    printf("extern variable ext = %d\n", ext);
}
int main() {
    printf("Demonstrating auto and static storage clas  3 times:\n");
    for(int i = 0; i < 3; i++) {
        demonstrateStorage();
    }
    printf("\nDemonstrating register storage class:\n");
    demonstrateRegister();
    printf("\nDemonstrating external storage class:\n");
    demonstrateExtern();
    return 0;
}
