/*
 * a.c
 *
 *  Created on: ???/???/????
 *      Author: aelsh
 */
#include<stdio.h>
int main(){

	float x[100];
	float sum , avg ;
	int i,j;
	printf("enter the num of data :");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&j);
	if(j<100 || j>0){
	for(i=0;i<j;i++){
		printf("%d)enter num=",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&x[i]);
				sum +=x[i];


	}}
	else{printf("please inter again");}
	avg=sum/j;
printf("avg = %0.1f",avg);
}

