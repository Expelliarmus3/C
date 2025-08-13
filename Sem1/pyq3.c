#include<stdio.h>
#define SIZE 10
int search_binary(int arr[],int val,int n){
	int i,l,u,mid;
	l=0;
	u=n-1;
	for(l=0;l<u;l++){
		mid=(l+u)/2;
		if(arr[mid]==val){
			printf("The %d is present at %d position",val,(mid+1));
			break;
		}
		else if(arr[mid]<val){
			u=mid-1;
		}
		else if(arr[mid]>val){
			l=mid+1;
		}
	}
	if(l>u){
		printf("Value not found");
	}
	
}
void main(){
	int n,i,a[SIZE],val;
	printf("Enter number of values you want to enter: ");
	scanf("%d",&n);
	printf("\nEnter the values in order: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nThe array\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nEnter value you want to search:");
	scanf("%d",&val);
	search_binary(a,val,n);
}
