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

	for (int i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
}