#include <stdio.h>

void cube(int n){
	printf("Cube of %d is:- %d", n, n*n*n);
}

int main(){
	int n;
	printf("Enter Number:- ");
	scanf("%d",&n);

	cube(n);
}