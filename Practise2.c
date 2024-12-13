#include<stdio.h>
#define SIZE 10
void main(){
	int i,j,n,a[SIZE],key;
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
	
	//BUBBLE SORT
//	for(i=0;i<n-1;i++){
//		for(j=0;j<n-i-1;j++){
//			if(a[j+1]<a[j]){
//				a[j+1]=a[j+1]^a[j];
//				a[j]=a[j+1]^a[j];
//				a[j+1]=a[j+1]^a[j];
//			}
//		}
//	}

	//SELECTION SORT
//	for(i=0;i<n-1;i++){
//		for(j=i+1;j<n;j++){
//			if(a[i]>a[j]){
//				a[i]=a[j]^a[i];
//				a[j]=a[j]^a[i];
//				a[i]=a[j]^a[i];
//			}
//		}
//	}

	//INSERTION SORT
	for(i=0;i<n;i++){
		key=a[i];
		j=i-1;
		for(j=i-1;j>=0;j--){
			if(a[j]>key)
				a[j+1]=a[j];
		}
		a[j+1]=key;
			

		
//		while(j>=0 && a[j]>key){
//		a[j+1]=a[j];
//		--j;
//		
//		}
//		a[j+1]=key;
		
	}
	printf("\nSorted Array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
