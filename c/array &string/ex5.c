/*
 * ex5.c
 *
 *  Created on: Aug 7, 2022
 *      Author: aelsh
 */


#include <stdio.h>
void main() {
	int a[100] , i, num,insert ;
	printf("enter n of element");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&num);
	for(i=0;i<num;i++){
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&a[i]);}
	printf("\n please enter the element to be searched = \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&insert);
	while (i<num && insert !=a[i]){
		i++;}
	if (i < num){
		printf("n at location =%d ",i+1);}
	else{
		printf("error");
	}

}
