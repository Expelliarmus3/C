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

int search_binary(int arr[],int n,int val){
	int l=0,u=n-1,i,mid;
	for(l=0;l<=u;l++){
		mid=(l+u)/2;
		if(arr[mid]<val){
			u=mid-1;
		}
		if(arr[mid]>val){
			l=mid+1;
		}
		if(arr[mid]==val){
			printf("Value %d is present at %d position",val,(mid+1));
		}
	}
	if(l>u)
		printf("Value not present");
	
}

void main(){
	int i,j,n,a[SIZE],val;
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
	
	printf("\nEnter value to be searched: ");
	scanf("%d",&val);
	search_binary(a,n,val);
}
