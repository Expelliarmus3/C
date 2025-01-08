#include<stdio.h>
#define r 3
#define c 3
void main(){
	int a[r][c],i,j,n,n1;
	printf("Enter number of rows to enter:");
	scanf("%d",&n);
	printf("\nEnter number of column to enter:");
	scanf("%d",&n1);
	printf("\nEnter your values: ");
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("\nDiagonal matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
			if(j==i)
				printf("%d\t",a[i][j]);
			else
				printf("0\t");
		}
		printf("\n");
	}
	
	printf("\nUpper matrix\n");
	for(i=0;i<n;i++){
		for(j=0;j<n1;j++){
			if(j>=i)
				printf("%d\t",a[i][j]);
			else 
				printf("0\t");
		}
		printf("\n");
	}
}
