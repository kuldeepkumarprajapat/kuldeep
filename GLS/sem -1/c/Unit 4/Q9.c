#include <stdio.h>

void small(int a, int b, int c){
	if(a <= b || a <= c)
		printf("%d is Smallest Number...\n",a);
	else if(b <= a || b <= c)
		printf("%d is Smallest Number...\n",b);
	else
		printf("%d is Smallest Number...\n",c);
}


int main(){
	int a,b,c;
	printf("Enter the First Number:- ");
	scanf("%d",&a);
	printf("Enter the Second Number:- ");
	scanf("%d",&b);
	printf("Enter the Third Number:- ");
	scanf("%d",&c);

	small(a,b,c);
}