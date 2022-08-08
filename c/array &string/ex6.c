/*
 * a.c
 *
 *  Created on: Aug 8, 2022
 *      Author: aelsh
 */


void main() {
	char a[100];
	char cl;
	int i , count=0;
	printf("enter a string\n");

	gets(a);
	printf("\n enter a char to find frequency\n");
	scanf("%c",&cl);
	for(i=0;a[i] !='\0';++i){
		if(cl==a[i]){
			++count;
		}
	}
	printf("frequency of %c = %d",cl,count);
}
