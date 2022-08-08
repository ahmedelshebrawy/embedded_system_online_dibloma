/*
 length of string without using function strlen
 */
#include <stdio.h>
#include<string.h>
int main (){
char a[1000];
char s;
int i,j=0;
printf("enter the string\n");
fflush(stdin);
fflush(stdout);
gets(a);
i=0;
j=strlen(a)-1;
while(i<j){
	s=a[i];
	a[i]=a[j];
	a[j]=s;
	i++;
	j--;

}
printf("\n the reverse string : %s",a);
}
