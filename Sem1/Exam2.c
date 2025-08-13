#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void main(){
	int a,temp,count=0,r,sum=0;
	printf("Enter a number");
	scanf("%d",&a);
	temp=a;
	while(a>0){
		a=a/10;
		count++;
	}
	a=temp;
	while(a>0){
		r=a%10;
		sum+=pow(r,count);
		a=a/10;
	}
	a=temp;
	if(a==sum){
		printf("armstrong");
	}
	else
		printf("No");
}
