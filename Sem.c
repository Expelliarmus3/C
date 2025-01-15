//32,36,40
#include<stdio.h>
#include<stdlib.h>
#define pi 3.14
#define AREA(r) pi*r*r
//int fact(int n){
//	if(n==1)
//		return 1;
//	else
//	 return n*fact(n-1);
//}
int bin(int*ptr,int n,int u,int l,int key){
	int mid,i;
	//l=0;
	//u=n-1;
	mid= (l+u)/2;
	for(i=0;i<n;i++){
		if((ptr+i)==(ptr+mid))
			return mid;
		else if(ptr+i>ptr+mid)
			return bin(ptr,n,u,mid+1,key);
		else
			return bin(ptr,n,mid-1,l,key);
	}
}
void main(){
	/*char i;*/ int r=1,n,j,i,k,sum_prime=0; float sum=0; int*ptr;
//	for(i='a';i<='z';i++){ //97 to 122
//		printf("%d",i);
//		printf("\n");
//	}
//	for(i='A';i<='Z';i++){ //65 to 90
//		printf("%d",i);
//		printf("\n");
//	}
//	printf("%f",AREA(r));
	printf("Enter");
	scanf("%d",&n);
	ptr=(int*)malloc(n*sizeof(int));
	printf("Enter values");
	for(i=0;i<n;i++){
		scanf("%d",ptr+i);
	}
	printf("\nDisplay array\n");
	for(i=0;i<n;i++){
		printf("%d\t",*(ptr+i));
	}
	printf("\nEnter k\n");
	scanf("%d",&k);
	printf("Element found at %d",bin(ptr,n,n,0,k));
}
