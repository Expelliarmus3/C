#include<stdio.h>
#define SIZE 10
#include<stdlib.h>
int bin(int arr[],int u,int l,int key){
	int mid,i;
	//l=0;
	//u=n-1;
	mid=l+ (u-l)/2;
	if(arr[mid]==key)
		return mid;
	else if(key>arr[mid])
		return bin(arr,u,mid+1,key);
	else
		return bin(arr,mid-1,l,key);
	
}

void main(){
	int/**ptr*/i,k,n,arr[SIZE],e;
	printf("Enter no of values");
	scanf("%d",&n);
	printf("\nEnter key");
	scanf("%d",&k);
	//ptr=(int*)malloc(n*sizeof(int));
	printf("\nEnter the values");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nshow array\n");
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	e=bin(arr,0,n-1,k);
	printf("%d",e);
}
