//2. Write a program to find the roots of a quadratic equation.
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,discriminant,root1,root2,real,img;
    printf("Enter the coefficient of the quadratic equation(a,b,c): ");
    scanf("%f,%f,%f",&a,&b,&c);
    // printing basic quadratic equation
    printf("The quadratic equation is: %.1fx^2 + %.1fx + %.1f\n",a,b,c);
    discriminant=(b*b)-(4*a*c);
    printf("The dicriminant is: %.2f\n",discriminant);
    //Now to find roots, we need to give three conditions
    if (discriminant > 0) {
        // Two real and distinct roots
        root1=(-b+sqrt(discriminant))/(2*a);
        root2=(-b-sqrt(discriminant))/(2*a);
        printf("The roots are real and distinct: %.2f and %.2f\n", root1, root2);
    } else if (discriminant==0) {
        // Two real and equal roots
        root1 =-b/(2*a);
        root1==root2;
        printf("The roots are real and equal: %.2f and %.2f\n", root1, root2);
    } else{
        // Two distinct and imaginary roots
        real = -b / (2 * a);
        img = sqrt(-discriminant) / (2 * a);
        printf("The roots are distinct and imaginary: %.2f + %.2fi and %.2f - %.2fi\n", real,img,real,img);
    }
    return 0;
}