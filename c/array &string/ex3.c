/*
 * main.c
 *
 *  Created on: Aug 7, 2022
 *      Author: aelsh
 */


#include<stdio.h>
 int main()
 {
	int a[10][10];
	int t[10][10];
	int j,i,r,c;
	printf("please enter a metrix size\n");
	fflush(stdin);
	fflush(stdout);

	scanf(" %d %d", &r, &c);
	printf("\n enter element  the matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf(" enter elements %d%d",i+1,j+1);
			fflush(stdin);
			fflush(stdout);

			scanf("%d", &a[i][j]);
		}
	}
	printf("enter the matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
			if(j==c-1){
				printf("\n");
			}
		}
	}
	printf("trans matrix \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			t[i][j]=a[j][i];
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",t[i][j]);
			if(j==r-1){
				printf("\n");
			}
		}
	}

}

