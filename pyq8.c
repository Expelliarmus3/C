#include<stdio.h>
int swap(int* a,int* b){
	int temp;
	temp= *a;
	*a=*b;
	*b=temp;
	printf("\nAfter swap a=%d b=%d",*a,*b);
	return 0;
}
void main(){
	int a,b;
	printf("Enter two values:");
	scanf("%d%d",&a,&b);
	printf("\nBefore swap a=%d b=%d",a,b);
	swap(&a,&b);
}
