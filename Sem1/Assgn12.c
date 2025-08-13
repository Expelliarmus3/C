#include<stdio.h>
void main(){
	int x,r,c;
	printf("Enter number of rows: ");
	scanf("%d",&x);
	for(r=1;r<=x;r++){
		for(c=1;c<=(x-r);c++){
			printf(" ");
		}
		for(c=1;c<=(2*r-1);c++){
			printf("*");
		}
		printf("\n");
	}
	
}
