#include <stdio.h>

int main(){
	int sum, i = 10;
	while(i<=20){
		if(i % 2 != 0)
			sum+=i;
		i++;
	}

	printf("Sum of Even no. between 10 to 20 is :- %d\n",sum);
}