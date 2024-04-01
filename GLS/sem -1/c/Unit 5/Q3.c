#include <stdio.h>

int main(){
	int n,sum;
	printf("Enter the Size:- ");
	scanf("%d",&n);
	int arr[n];
    
    printf("Enter the Values:- \n");
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}

	for(int i = 0 ; i < n ; i++){
		sum += arr[i];
	}

	printf("Average of all number is:- %d\n", sum/n);
}