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

	int large = arr[0];

	for(int i = 1 ; i < n ; i++){
		if(arr[i] > large)
			large = arr[i];
	}

	printf("Largest number is:- %d\n",large);
}