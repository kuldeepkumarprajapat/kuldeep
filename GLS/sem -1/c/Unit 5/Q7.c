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

	for(int i = 0 ; i < n-1 ; i++){
		for(int j = i+1 ; j < n-1 ; j++){
			if(arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}

	printf("\n\nAfter Array:- \n");
	for (int i = 0; i < n; i++){
		printf("%d ",arr[i]);
	}
	
}