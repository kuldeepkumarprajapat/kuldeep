#include <stdio.h>

int main(){
	int n, a=0, b=1;
	printf("Enter the Number:- ");
	scanf("%d",&n);

	printf("%d %d ",a,b);
	for(int i = 0 ; i < n-2 ; i++){
		int sum = a + b;
		printf("%d ", sum);
		a = b;
		b = sum;
	}
}