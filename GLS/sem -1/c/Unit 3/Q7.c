#include <stdio.h>

int main(){
	int a,b,n;
	printf("Enter First Number:- ");
	scanf("%d",&a);
	printf("Enter Second Number:- ");
	scanf("%d",&b);

	calc:
		printf("\n1.Addition		2.Subtraction");
		printf("\n3.Multiplication	4.Division\n");
		printf("Enter number to select method:- ");
		scanf("%d",&n);

	switch(n){
		case 1: printf("%d\n",a+b);
		        break;
		case 2: printf("%d\n",a-b);
		        break;
		case 3: printf("%d\n",a*b);
		        break;
		case 4: printf("%d\n",a/b);
		        break;
		default: printf("\nEnter Valid Number...\n");
		      goto calc;
	}
}