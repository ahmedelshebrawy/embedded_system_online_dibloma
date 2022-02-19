/*

 * ex2.c
 * check tne character is a vowel   or is a consonant
 *  Created on: ???/???/????
 *      Author: aelsh
 */

#include<stdio.h>
int main (){
	char x; //variable char
	printf("enter an alphabet :");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x);
	if(x =='a'||x=='A' ||x== 'e'||x=='E'||x=='i'||x=='I' ||x== 'o' ||x=='O'||x== 'u'||x=='U'){

	printf("%c is a vowel",x); // tne character is a vowel


	}
	else{
		printf("%c is a consonant",x); //tne character is aconsonant
	}

return 0;

}
