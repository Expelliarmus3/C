//find the max and min of three numbers using ternary operator
#include<stdio.h>
void main(){
	int a,b,c,max,min;
	printf("enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a>c?a:c:b>c?b:c;
	min=a<b?a<c?a:c:b<c?b:c;
	printf("\nMaximum value is %d",max);
	printf("\nMinimum value is %d",min);
}
