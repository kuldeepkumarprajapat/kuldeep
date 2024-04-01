#include <stdio.h>

int main(){
	int a,sum;
	printf("Enter Number:- ");
	scanf("%d",&a);

	for(int i = 1 ; i <= a ; i++){
		sum += i;
	}

	printf("Sum of all Number is:- %d\n",sum);
}