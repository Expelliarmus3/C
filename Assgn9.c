#include<stdio.h>
#include<math.h>
void main(){
//	int x,s,y=0,r;
//	printf("Enter the value of s (upper limit): ");
//	scanf("%d",&s);
	int x,y=0;
	for (x=1;x<=5;x++){
		y+=pow(x,x);
	}
	printf("y =%d",y);
	//return 0;
}
