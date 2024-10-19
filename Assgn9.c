#include<stdio.h>
#include<math.h>
void main(){
	int x,s,y=0,r;
	printf("Enter the value of s (upper limit): ");
	scanf("%d",&s);
	for (x=1;x<=s;x++){
//		r= pow(x,x);
		y+=pow(x,x);
	}
	printf("The sum is =%d",y);
}
