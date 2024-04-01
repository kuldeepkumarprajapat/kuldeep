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

	printf("Befor Array:- \n");
	for (int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}

	for(int i = 0 ; i < n/2 ; i++){
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i] = temp;
	}

	printf("\n\nAfter Array:- \n");
	for (int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
}