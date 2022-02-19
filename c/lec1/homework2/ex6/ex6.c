/*
 * ex6.c

 *calculate sum of natural number
 *  Created on: ???/???/????
 *      Author: aelsh
 */


#include<stdio.h>
int main(){
	unsigned int num; //positive number
	int i, sum; //i is counter
	printf("enter an integer : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num); //input number
	for (i=1; i<=num ;++i ){

	sum +=i; //sum of the number

	}
	printf("sum = %d ",sum); //print the sum


}
