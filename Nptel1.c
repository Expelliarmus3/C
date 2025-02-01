#include<stdio.h>
void main(){
	int n1=3,n2=4,n3=-89;
	//scanf("%d%d%d",n1,n2,n3);
	if(n1>n2 && n1>n3){
		printf("%d is the largest",n1);
	}
	else if (n1>n2 && n3>n1)
		printf("%d is the largest",n3);
	else if(n2>n1 && n2>n3)
		printf("%d is the largest",n2);
	else if(n2>n1 && n3>n2)
		printf("%d is the largest",n3);
}
