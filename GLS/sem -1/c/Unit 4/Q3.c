#include <stdio.h>

void largest(int n, int m){
	if(n > m)
		printf("%d is largest",n);
	else
		printf("%d is largest",m);
}

int main(){
	int a, b;
	printf("Enter the First Number:- ");
	scanf("%d",&a);
	printf("Enter the Second Number:- ");
	scanf("%d",&b);

	largest(a,b);
}