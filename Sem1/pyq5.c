#include<stdio.h>
int nat(int n){
	if(n==1){
		return 1;
	}
	else
		return 1+nat(n-1);
}
void main(){
	int n,i;
	printf("Enter number of terms:");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
		printf("%d\t",nat(i));
}
