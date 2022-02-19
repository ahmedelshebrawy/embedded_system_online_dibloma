/*
check whether anumber is even or odd
 * ex7.c
 *
 *  Created on: ???/???/????
 *      Author: aelsh
 */

#include<stdio.h>
int main(){
	int num1,i;
	int f=1; //variable num
	printf("enter an integer : ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&num1); //input the number
	fflush(stdin);  fflush(stdout);
	if(num1>=0){
		for (i=1 ; i<=num1 ; ++i)
		{
			f *=i;

		}
		printf(" factorial = %d ",f); //print the ffactorial number
	}
	else{	printf("Error !! factorial  negative number doesen't exist"); //error input
	}


}
