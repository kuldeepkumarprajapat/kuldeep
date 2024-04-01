#include <stdio.h>

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main(){
	int a, b;
	printf("Enter the First Number:- ");
	scanf("%d",&a);
	printf("Enter the Second Number:- ");
	scanf("%d",&b);


	printf("Before Swapping :- %d and %d\n\n",a,b);

	swap(&a,&b);

	printf("After Swapping :- %d and %d\n\n",a,b);
}