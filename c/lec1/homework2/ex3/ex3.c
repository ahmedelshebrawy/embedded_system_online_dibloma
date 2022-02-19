/*

 * ex3.c
 *check largest number
 *  Created on: ???/???/????
 *      Author: aelsh
 */


#include<stdio.h>
int main (){
	float num1,num2,num3 ; //variable char
	printf("enter three number :");
	fflush(stdin);  fflush(stdout);
	scanf("%f",&num1); //input 1st num
	fflush(stdin);  fflush(stdout);
	scanf("%f",&num2); //input 2st num
	fflush(stdin);  fflush(stdout);
	scanf("%f",&num3); //input 3st num
	fflush(stdin);  fflush(stdout);
	if(num1>num2 &&num1>num3){   //check largest number
		printf("largest number =%.2f",num1);} // 1st number is largest
	else if(num2>num1 && num2>num3 ){
		printf("largest number =%.2f",num2);// 2st number is largest
	}
	else if(num3>num1 && num3>num2 ){
		printf("largest number =%.2f",num3); // 3 st number is largest
	}
	else {

		printf("please check again");
	}
}

