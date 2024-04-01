#include <stdio.h>

int main(){
	int n;
	printf("Enter the Number:- ");
	scanf("%d",&n);

	if(n % 2 == 0)
		goto even;
	else
		goto odd;

	even :
		printf("%d is a Even Number...\n", n);
		return;

	odd :
		printf("%d is a Odd Number...\n", n);
		
}