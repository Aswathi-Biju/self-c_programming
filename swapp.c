#include<stdio.h>
void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x,y,*xp,*yp;
	printf("Enter two nos. for x and y:");
	scanf("%d %d",&x,&y);
	xp=&x;
	yp=&y;
	printf("Before swapping\n");
	printf("x=%d and y=%d\n",*xp,*yp);
	swap(&x,&y);
	printf("After swapping\n");
	printf("x=%d and y=%d\n",*xp,*yp);
	return 0;
}
