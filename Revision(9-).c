#include<stdio.h>
#include<math.h>
void main(){
	int i,x,sum=0;
	printf("Enter a number");
	scanf("%d",&x);
	for(i=1;i<=x;i++){
		sum+= pow(i,i);
	}
	printf("\n%d",sum);
	
	
}

