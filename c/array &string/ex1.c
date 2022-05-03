/*
 * ahmed.c
 *the matrix 2*2  ex1
 *the the sum of matrix
 * */


#include<stdio.h>
int main(){
	float x[2][2];
	float y[2][2] , sum[2][2];
	int i,j;
	printf("please enter first matrix :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter a [%d] [%d] :",i+1,j+1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f",&x[i][j]);


		}

	}
	printf("please enter second matrix :\n");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("enter b [%d] [%d] :",i+1,j+1);
			fflush(stdout);
			fflush(stdin);
			scanf("%f",&y[i][j]);


		}

	}
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			sum[i][j]= x[i][j] + y[i][j] ;

		}

	}
	printf("the sum :");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%0.1f",sum[i][j]);
			if(j==1){
            	printf("\n");
			}
			}
	}
}


