/*
 length of string with using function strlen
 */
#include <stdio.h>
#include<string.h>
void main (){
char a[1000];
int z;
printf("enter a string\n");
fflush(stdin); fflush(stdout);
gets(a);
z= strlen(a);
printf("%d",z);
}
