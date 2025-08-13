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
	
	//SELECTION SORT
	for(i=0;i<n-1;i++){
		min=i;
		for(j=i+1;j<n;j++){
			if(a[min]>a[j]){
				min=j;
			}
		}
		if(min!=i){
			a[min]=a[min]^a[i];
			a[i]=a[min]^a[i];
			a[min]=a[min]^a[i];
		}
	}
	printf("\nSorted Array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
}
