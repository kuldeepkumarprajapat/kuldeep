#include <stdio.h>

int main(){
	int sum, i = 50;
	while(i<=100){
		if(i % 2 == 0)
			sum+=i;
		i++;
	}

	printf("Sum of Even no. between 50 to 100 is :- %d\n",sum);
}