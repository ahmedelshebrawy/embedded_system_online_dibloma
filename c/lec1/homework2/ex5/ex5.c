/*
 * ex5.c
 *
 *  Created on: ???/???/????
 *      Author: aelsh
 */


#include<stdio.h>
int main(){

	char x; //variabe char

	printf("please enter a character :");
	fflush(stdin); fflush(stdout);
	scanf("%c",&x); //input character
	fflush(stdin); fflush(stdout);
	if (x>='a'&&x<='z'){ //check is small character or not
		printf("%c is an alphabet",x); //is character
	}
	else if (x>='A'&&x<='Z'){   //check is small character or not
		printf("%c is an alphabet",x); // is character
	}
	else {
		printf("%c is not an alphabet",x); //is not character
	}
}
