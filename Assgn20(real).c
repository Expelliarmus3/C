#include<stdio.h>
int fact(int n){
	if(n==1)
		return 1;
	else
		return (n*fact(n-1));
}
void main(){
	int i; 
	float sum=0.0;
	for(i=1;i<=5;i++){
		sum+=1.0/fact(i);
//		printf("%lf",1/fact(i));
//		printf("\n");
	}
	printf("The result is %lf",sum);
}
