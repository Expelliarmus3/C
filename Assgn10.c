#include<stdio.h>
#include<math.h>
void main(){
	int sum=0,i=0,num,n,r;
	printf("Enter a number: ");
	scanf("%d",&num);
	n=num;
	//counting number of digits
	while(num!=0){
		num/=10;
		i++;	
	}
	num=n;
	//addition along with the powers
	while(num!=0){
		
		r=num%10;
		sum+=pow(r,i);
		num/=10;	
	}
	num=n;
	if(num==sum){
		printf("It is armstrong number");
	}
	else{
		printf("It is not an armstrong number");
	}
}
