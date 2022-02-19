/*
 *
 ex4.c

 * check whether a number is positive or negative
 *  Created on: ???/???/????
 *      Author: aelsh
 */
#include<stdio.h>
int main(){

	float num;

	printf("please enter anumber :");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num); //input num
	fflush(stdin); fflush(stdout);
	if (num>0 ){

		printf("%.2f is positive",num); //the num is positive
		fflush(stdin); fflush(stdout);}

	else if (num<0){


		printf("%.2f is negative",num); //num is negative
	 }

	else {
		printf(" you entered %.2f ",num); //num equal zero
	}
	return 0;
}

