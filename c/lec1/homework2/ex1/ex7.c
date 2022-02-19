/*
check whether anumber is even or odd
 * ex7.c
 *
 *  Created on: ???/???/????
 *      Author: aelsh
 */

#include<stdio.h>
int main(){
	int num1; //variable num
	printf("enter an integer you want to check: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num1); //check is odd or even
	fflush(stdin);  fflush(stdout);
	if(num1%2==0){
		printf("%d is even",num1);
	}
	else{	printf("%d is odd",num1);
	}


}
