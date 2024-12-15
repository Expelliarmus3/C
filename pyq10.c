#include<stdio.h>
#include<string.h>
#define Size 100
void main(){
	int l,i,len=0;
	char str[Size];
	printf("Enter string ");
	gets(str);
	puts(str);
	for(l=0;str[l];l++);
	//printf("\nLenghth %d size %u",strlen(str),sizeof(str));
	printf("Lenghth %d\n",l);
	//printf("\nLenghth %d",l);
	
}
