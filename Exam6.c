#include<stdio.h>
//int arrayprint(int *p,int r,int c){
//	int i,j;
//	for(i=0;i<r;i++){
//		for(j=0;j<c;j++){
//			printf("%d\t",*(p + i * c + j));
//		}
//		printf("\n");
//	}
//}
//void main(){
//	int arr[2][2]={{1,2},{4,5}};
//	arrayprint((int*)arr,2,2);
//}
int print2D(int (*p)[2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
}
void main(){
	int arr[2][2]={{1,2},{4,5}};
	//int (*ptr)[2]=arr;
	print2D(arr);
}
