#include<stdio.h>
#define SIZE 10
void sort_bubble(int*p,int n){
	int i,j,t;
	//int*q;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			//q=p+1;
			if(*(p+j)>*(p+j+1)){
				*(p+j)=*(p+j)^*(p+j+1);
				*(p+j+1)=*(p+j)^*(p+j+1);
				*(p+j)=*(p+j)^*(p+j+1);
			}
			//++p;
		}
	}
//	for(i=0;i<n;i++){
//		printf("%d\t",*p+i);
//	}

}
void main(){
	int a[SIZE],i,n;
	printf("Enter number of elements you want:");
	scanf("%d",&n);
	printf("\nEnter the elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("\nUnsorted Array\n");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
	printf("\nSorted Array\n");
	sort_bubble(a,n);
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
