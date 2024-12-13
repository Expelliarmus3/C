#include<stdio.h>
#define SIZE 10
int sort_bubble(int arr[],int n){
	int i,j;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j+1]<arr[j]){
				arr[j]=arr[j]^arr[j+1];
				arr[j+1]=arr[j]^arr[j+1];
				arr[j]=arr[j]^arr[j+1];
				
			}
		}
	}
	
	 for(i=0;i<n;i++){
	    printf("%d\t",arr[i]);
	}
	return 0;
			
}

void main(){
	int i,j,n,a[SIZE];
	printf("How many elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted array:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	
	printf("\nSorted array:\n");
	sort_bubble(a,n);
	
	
	
	
	
	
	
	
	
	
//	int i=1;
//	for(;i>=0;i++){
//		printf("%d ",i);
//	}
//	 int j=8;
//	 while(j=8){
//	 	printf("Getting out"); we get infinite loop for both the codes
//	 	j++;
//	 }
}
