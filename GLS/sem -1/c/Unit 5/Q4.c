#include <stdio.h>

int main(){
	int n;
	printf("Enter the Size:- ");
	scanf("%d",&n);
	int arr[n];
    
    printf("Enter the Values:- \n");
	for(int i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}

	int small = arr[0];

	for(int i = 1 ; i < n ; i++){
		if(arr[i] < small)
			small = arr[i];
	}

	printf("Smallest number is:- %d\n",small);
}