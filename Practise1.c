#include<stdio.h>
# define SIZE 10
void bubble_sort( int arr[], int array_size){
	int i,j;
	for(i=0;i<array_size;i++){
		for(j=0;j<n-i-1;j++){
				if(arr[j+1]<arr[j]){
				arr[j+1]=arr[j+1]^arr[j];
				arr[j]=arr[j+1]^arr[j];
				arr[j+1]=arr[j+1]^arr[j];
			}
		}
	
	}
//	for(i=0;i<array_size;i++){
//		printf("%d",arr[i]);
//	}
}

void main(){
	int a[SIZE],i,n,j;
	printf("Enter number of values to enter: ");
	scanf("%d",&n);
	printf("Enter the values: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted Array:\n");
	for(i=0;i<n;i++){
		a[i]= bubble_sort(a[SIZE],n);
	}
	bubble_sort(a[SIZE],n);
//	for(i=0;i<n;i++){
//		printf("%d\t",a[i]);
//	}
//	printf("\nSorted array\n");
//	for(i=0;i<n-1;i++){
//		for(j=0;j<n-i-1;j++){
//			if(a[j+1]<a[j]){
//				a[j+1]=a[j+1]^a[j];
//				a[j]=a[j+1]^a[j];
//				a[j+1]=a[j+1]^a[j];
//		}
//		
//		}
//	}
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
