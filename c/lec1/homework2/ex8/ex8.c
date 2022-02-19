/*
 * ex8.c
  simble calculator to add ,subtract ,multiplay or divide
 *
 *  Created on: ???/???/????
 *      Author: aelsh
 */

#include<stdio.h>
int main(){
	float num1 ,num2 ;//variable num
	char x; //operator
	printf("enter operator either + or - or * or divide : ");
	fflush(stdin);  fflush(stdout);
	scanf("%c",&x); //input the number
	fflush(stdin);  fflush(stdout);
	printf("enter two operands : ");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&num1); //input the number1
	fflush(stdin);  fflush(stdout);
	scanf("%f",&num2); //input the number2
	fflush(stdin);  fflush(stdout);
	if(x=='+'){
		float add;
		add=num1+num2 ; //add two number
		printf("%.2f + %.2f =",num1,num2); //print two number
		printf("%.2f",add); //print add two number
	}
	else if(x=='-'){
		float  s;
		s=num1-num2 ; //subtract two number
		printf("%.2f - %.2f = ",num1,num2); //print two number
		printf("%.2f",s); //printsubtract two number

	}
	else if(x=='*'){  //multiply two number
		float m;
		m=num1*num2 ;
		printf("%.2f * %.2f =",num1,num2); //multiply two number
		printf("%.2f",m); // print multiply two number

	}
	else if(x=='/'){
		float d;
		d=num1/num2 ; // divide two number
		printf("%.2f / %.2f =",num1,num2);
		printf("%.2f",d); //  print divide two number

	}
	else{
		printf("erro please try again"); //no every operator
	}
}
