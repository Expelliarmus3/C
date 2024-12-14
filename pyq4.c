#include<stdio.h>
#define SIZE 10
void main(){
	int a[SIZE][SIZE],b[SIZE][SIZE],r1,r2,c1,c2,i,j,c[SIZE][SIZE],k;
	printf("Enter number of rows you want to enter in matrix 1: \n");
	scanf("%d",&r1);
	printf("Enter number of columns you want to enter in matrix 1: ");
	scanf("%d",&c1);
	printf("\nThe elements of matrix:\n");
	for(i=0;i<(r1-1);i++){
		for(j=0;j<c1-1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter number of rows you want to enter in matrix 2: \n");
	scanf("%d",&r2);
	printf("Enter number of columns you want to enter in matrix 2: ");
	scanf("%d",&c2);
	printf("\nThe matrix:\n");
	for(i=0;i<(r2-1);i++){
		for(j=0;j<c2-1;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	if(c1==r2){
		for(i=0;i<r1;i++){
			for(j=0;j<c2;j++){
				c[i][j]=0;
			}
			for(k=0;k<c2;k++){
				c[i][k]+=a[i][k]*b[k][j];
			}
		}
	}
	printf("\nThe multiplication matrix\n");
	for(i=0;i<r1;i++){
		for(j=0;j<c2;j++){
			printf("%d\t",c[i][j]);
		}
	}
}
