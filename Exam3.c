//*string length,*frequency of vowel,matrix multiply transpose,sort,
#include<stdio.h>
int fibo(int n){
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
int gcd(int a,int b){
	if (a%b==0)
		return b;
	else if(b%a==0)
		return a;
	else if(a>b)
		return gcd(a%b,b);
	else
	 return gcd(b%a,a);
}
void main(){
	int a,b,i ,hcf;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
//	if(a>b){
//		if(a%b==0){
//			printf("%d is the gcd",b);
//		}
//		else{
//			for(i=1;i<b;i++){
//				if(a%i==0 && b%i==0){
//					gcd=i;
//				}
//			}
//			printf("%d is the gcd",gcd);
//		}
//	}
//	else{
//		if(b%a==0){
//			printf("%d is the gcd",a);
//		}
//		else{
//			for(i=1;i<a;i++){
//				if(a%i==0 && b%i==0){
//					gcd=i;
//				}
//			}
//			printf("%d is the gcd",gcd);
//		}
//	}
	
//	for(i=0;i<5;i++)
//	printf("%d ",fibo(i));
	//hcf= gcd(a,b);
	printf("\n%d",gcd(a,b));
	
	

}
