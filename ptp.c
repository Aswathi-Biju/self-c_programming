#include<stdio.h>
int main(){
	int num,*p,**tp;
	printf("Enter a number: ");
	scanf("%d",&num);
	p=&num;
	tp=&p;
	printf("Number:%d\nPointer:%d\n  Double Pointer:%d\n",num,*p,**tp);
	**tp+=5;
	printf("After adding 5 to number\n");
	printf("Number:%d\nPointer:%d\nDouble Pointer:%d\n",num,*p,**tp);
	**tp*=5;
	printf("After multiplying 5 to number\n");
	printf("Number:%d\nPointer:%d\nDouble Pointer:%d\n",num,*p,**tp);
	**tp-=5;
	printf("After subtracting 5 to number\n");
	printf("Number:%d\nPointer:%d\nDouble Pointer:%d\n",num,*p,**tp);
	return 0;
}
