/*
 * ex4.c
 *
 *  Created on: Aug 7, 2022
 *      Author: aelsh
 */


#include <stdio.h>
void main(){
	int n[100] , i, element , loc ,insert ;
	printf("enter n of element");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&element);
	for(i=0;i<element;i++){
		fflush(stdin);
		fflush(stdout);
		scanf("%d",&n[i]);
	}
	printf("\n please enter to the inserted = \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&insert);
	printf("\n please enter to the location = \n");
	fflush(stdin);
	fflush(stdout);
	scanf("%d",&loc);
	for(i=element;i>=loc;i--){
		n[i]=n[i-1];
	}
	element++;
	n[loc-1]=insert;
	for(i=0;i<element;i++){
		printf(" %d",n[i]);
	}

}
