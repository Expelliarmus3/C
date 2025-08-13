#include<stdio.h>
#define SIZE 10
void main(){
	int a[SIZE][SIZE],b[SIZE][SIZE],rsl[SIZE][SIZE],r,c,r1,r2,c1,c2,i,j;
	printf("enter row for matrix 1: ");
	scanf("%d",&r1);
	printf("enter column for matrix 1: ");
	scanf("%d",&c1);
	printf("enter row for matrix 2: ");
	scanf("%d",&r2);
	printf("enter column for matrix 2: ");
	scanf("%d",&c2);
	
	if(r1==r2 && c1==c2){
		r=r1;
		c=c1;
		printf("Enter the values for 1:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++)
				scanf("%d",&a[i][j]);
		}
		printf("Enter the values for 2:\n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++)
				scanf("%d",&b[i][j]);
		}
		
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				rsl[i][j]=a[i][j]+b[i][j];
			}
		}
	}
	printf("\nResultant:\n");
	for(i=0;i<r;i++){
			for(j=0;j<c;j++)
				printf("%d\t",rsl[i][j]);
			printf("\n");
		}
}
