#include <stdio.h>

int main(){
	int a,b,c;
	printf("Enter the First Number:- ");
	scanf("%d",&a);
	printf("Enter the Second Number:- ");
	scanf("%d",&b);
	printf("Enter the Third Number:- ");
	scanf("%d",&c);

	if(a >= b && a >= c)
		printf("%d is greater number", a);
	else if(b >= a && b >= c)
		printf("%d is greater number", b);
	else
		printf("%d is greater number", c);

}