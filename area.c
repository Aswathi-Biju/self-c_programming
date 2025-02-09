#include<stdio.h>
int main(){
    int radius;
    float pi=3.14;
    float area;
    printf("Enter radius of a circle: ");
    scanf("%d",&radius);
    if (radius == 0){
        printf("Invalid radius");    
    } 
    area=pi*radius*radius;
    printf("The area if the circle radius %d is %.2f", radius,area);
    return 0;
}