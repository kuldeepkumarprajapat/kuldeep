#include <stdio.h>

void posineg(int n){
	if(n >= 0)
		printf("%d is Positive Number...\n");
	else
		printf("%d is Negative Number...\n");
}

int main(){
	int n;
	printf("Enter the Number:- ");
	scanf("%d",&n);

	posineg(n);
}