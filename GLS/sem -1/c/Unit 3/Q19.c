#include <stdio.h>

int main(){
	int n;
	printf("Enter the Number:- ");
	scanf("%d",&n);

	if(n >= 0)
		goto positive;
	else
		goto negative;

	positive :
		printf("%d is a positive Number...\n", n);
		return;

	negative :
		printf("%d is a negative Number...\n", n);
}