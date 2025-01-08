#include<stdio.h>
//void swap(int*a,int*b){
//	int temp;
//	temp=*a;
//	*a=*b;
//	*b=temp;
//	printf("Swapped values %d %d",*a,*b);
//}
void main(){
	int x,y,i,n;
	int a,b,c;
//	printf("Before swap %d %d",a,b);
//	swap(&a,&b);
	
//	printf("Enter range");
//	scanf("%d",x);
//	if(x>0){
//		a=0;
//		b=1;
//		c=a+b;
//		printf("%d %d",a,b);
//		for(i=2;i<x;i++){
//			printf("%d",c);
//			a=b;
//			b=c;
//			c=a+b;
//		}
//	}
	
 
int t1 = 0, t2 = 1;
int nextTerm = t1 + t2;

printf("Enter the number of terms: ");
scanf("%d", &n);

printf("Fibonacci Series: %d, %d, ", t1, t2);

for (i = 3; i <= n; ++i) {
printf("%d, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
}
