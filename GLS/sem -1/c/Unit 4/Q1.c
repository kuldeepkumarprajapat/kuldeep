#include <stdio.h>

int aveg(){
	int a, b, c, d, e;
	printf("Enter Marks of 5 subject:- \n");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	int sum = (a+b+c+d+e)/5;

	return sum; 
}


int main(){
	int avg = aveg();

	printf("Average of 5 subject is:- %d",avg);
}