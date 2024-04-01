#include <stdio.h>

void add(int n, int m){
	printf("Addition:- %d\n",n+m);
}

void sub(int n, int m){
	printf("Subtraction:- %d\n",n-m);
}

void multi(int n, int m){
	printf("Multiplication:- %d\n",n*m);
}

void divi(int n, int m){
	printf("Division:- %d\n",n/m);
}

int main(){
	int a,b;
	printf("Enter First Number:- ");
	scanf("%d",&a);
	printf("Enter Second Number:- ");
	scanf("%d",&b);

	add(a,b);
	sub(a,b);
	multi(a,b);
	divi(a,b);
}