#include<stdio.h>
#define SIZE 10
void main(){
	int a[SIZE],i,n,val,flag=0;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("\nEnter the elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//printing the elements
	printf("\nArray:\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nEnter value to be searched: ");
	scanf("%d",&val);
	for(i=0;i<n;i++){
		if(a[i]==val){
			flag=1;
			break;
		}
	}
	if(flag==1){
		printf("\nThe element %d is present at %d position",val,++i);
	}
	else{
		printf("\n%d not present",val);
	}
}
