#include<stdio.h>
#include<string.h>
#define Size 100
void main(){
	int l,i,len=0;
	char str[Size],s1[]="world";
	printf("Enter string ");
	gets(str);
	puts(str);
	for(l=0;str[l];l++);
	//printf("\nLenghth %d size %u",strlen(str),sizeof(str));
	printf("Lenghth %d\n",l);
	//printf("\nLenghth %d",l);
	strncat(str,s1,3);
	puts(str);
	strcpy(str,s1);
	puts(str);
	strrev(str);
	puts(str);
	
	
}
