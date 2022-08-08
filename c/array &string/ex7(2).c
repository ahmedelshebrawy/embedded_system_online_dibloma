/*
 length of string without using function strlen
 */
#include <stdio.h>
#include<string.h>
void main (){
char a[1000] , i;

printf("enter a string\n");
fflush(stdin); fflush(stdout);
gets(a);
for(i=0;a[i] !='\0';++i){
}
printf("the length of string = %d",i);
}
