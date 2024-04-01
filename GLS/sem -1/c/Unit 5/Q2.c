#include <stdio.h>

int main(){
	int arr[5] = {1,3,4,8,6};
	int brr[5];

	for(int i = 0 ; i < 5 ; i++){
		brr[i] = arr[i];
	}

	printf("First Array:- \n");
	for (int i = 0; i < 5; i++){
		printf("%d ",arr[i]);
	}

	printf("\nSecond Array:- \n");
	for (int i = 0; i < 5; i++){
		printf("%d ",brr[i]);
	}
}