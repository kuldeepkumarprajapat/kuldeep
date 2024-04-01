#include <stdio.h>

int main(){
	int i = 0;
	do{
		printf("%c ", 'A' + i);
		i++;
	}
	while(i<26);
}