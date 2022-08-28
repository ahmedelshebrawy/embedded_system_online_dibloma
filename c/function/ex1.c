//first ex1:prime number between two intervels
#include <stdio.h>
int check_prime(int num);
int main (){
	int n1,n2,i,flag;
	printf("enter two numbers(intervels)");
	fflush(stdin);
	fflush(stdout);
	scanf("%d%d",&n1,&n2);
	printf("prime numbers between %d and %d : ", n1 , n2);
	for(i=n1+1;i<n2;++i){
		flag=check_prime(i);
		if(flag==0){
			printf("%d ",i);
		}
	}
	return 0;
}
int check_prime(int num){
	int j,flag=0;
	for(j=2;j<=num/2;++j){
		if(num %j ==0){
			flag=1;
			break;
		}
	}
	return flag;
}


