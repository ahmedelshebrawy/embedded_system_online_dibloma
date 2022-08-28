//second ex2:find factorial
#include <stdio.h>

int main (){
	int Factorial(int n);
	int main(){
		int n;
		fflush(stdin);
		fflush(stdout);
		printf("please enter the number positive integer");
		scanf("%d",&n);

		return 0;
	}

	int Factorial(int n){

		if(n!=0)
			return n*Factorial(n-1);
	}
