#include<stdio.h>
#define SIZE 10
void main(){
	int i,j,n,a[SIZE],key,min;
	printf("Enter number of values to enter: ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted Array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	//INSERTION SORT
	for(i=1;i<n;i++){
		key=a[i];
		for(j=i-1;j>=0;j--){
			if(a[j]>key)
				a[j+1]=a[j];
		}
		a[j+1]=key;
	}
	printf("\nSorted Array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
}
