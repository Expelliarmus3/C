#include<stdio.h>
#define SIZE 10
void main(){
	int a[SIZE],i,n,j;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//printing the elements
	printf("\nUnsorted array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	//sorting the array
	for(i=0;i<(n-1);i++){
		for(j=0;j<(n-i-1);j++){
			if(a[j]<a[j+1]){
				a[j]=a[j]^a[j+1];
				a[j+1]=a[j]^a[j+1];
				a[j]=a[j]^a[j+1];
			}
		}
	}
	printf("\nSorted array: \n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
