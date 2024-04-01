#include <stdio.h>

int main(){
	int n;
	printf("Enter the Number:- ");
	scanf("%d",&n);
	int count = 0;
    int m = n;
	if(m == 0){
			printf("1\n");
			return;
	}
	while(m != 0){
		m = m/10;
		count++;
	}
	printf("There is %d digits in %d",count,n);
}