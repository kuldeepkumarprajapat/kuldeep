#include <stdio.h>
#include <math.h>

int main(){
	int n;
	printf("Enter the Number:- ");
	scanf("%d",&n);
    int m = n;
    int ans = 0;
    while(m != 0){
        int digit = m % 10;
	    ans = (ans * 10) + digit;
	    m = m / 10;
    }
	printf("The Reverse of %d is:- %d\n",n, ans);
}