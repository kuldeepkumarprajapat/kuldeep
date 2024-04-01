#include <stdio.h>

void alpha(char c){
	if(c >= 'A' || c <= 'Z')
		printf("%c is Uppercase...\n",c);
	else if(c >= 'a' || c <= 'z')
		printf("%c is Lowercase...\n",c);
	else
		printf("%c is Consonant...");
}

int main(){
	char c;
	printf("Enter the Character:- ");
	scanf("%c",&c);

	alpha(c);
}