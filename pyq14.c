#include<stdio.h>
void main(){
	int i,j,n,r;
	char ch='a';
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=(n-i);j++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("*");
		}
		printf("\n");
	}
	
	//printf("Enter number of rows");
	//scanf("%d",r);
	for(i=n;i>=1;i--){
		for(j=1;j<=(n-i);j++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("%c",ch++);
		}
		printf("\n");
	}
}
