#include<stdio.h>
int GCD(int a, int b){
	int i,j;
	if(a>b){
		for(i=b;i>1;i--){
		if((a%i)==0 && (b%i)==0){
			return i;
		}
	}
	}
	else if(b>a){
		for(i=a;i>1;i--){
		if((b%i)==0 && (a%i)==0){
			return i;
		}
	}
}
	else
		return 1;
}

void main(){
	int a,b;
	printf("Enter two integers: ");
	scanf("%d %d",&a,&b);
	printf("The greatest common divisor of %d and %d is= %d",a,b,GCD(a,b));
}
