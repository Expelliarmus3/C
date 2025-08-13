#include<stdio.h>
#define SIZE 10
void main(){
	int a[SIZE],i,n,val,pos;
	printf("Enter number of values you want to enter: ");
	scanf("%d",&n);
	printf("\nEnter the values: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nEnter value you want to enter: ");
	scanf("%d",&val);
	printf("\nEnter position in which you want to enter value: ");
	scanf("%d",&pos);
	for(i=n-1;i>=(pos-1);i--){
		a[i+1]=a[i];
	}
	n++;
	a[pos-1]=val;
	printf("\nNew array\n");
	if(pos>n){
		for(i=0;i<pos;i++){
			printf("%d\t",a[i]);
		}
	}
	else{
	
		for(i=0;i<n;i++){
			printf("%d\t",a[i]);
		}
	}
}
