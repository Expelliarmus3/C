#include<stdio.h>
#include<math.h>
void main(){
	int num,temp,j,i,count=0,sum=0,r;
	char ch='a'; //	int i,x,sum=0;
//	printf("Enter a number");
//	scanf("%d",&x);
//	for(i=1;i<=x;i++)
//		sum+= pow(i,i);
//	printf("\n%d",sum);

//	printf("Enter a number:");
//	scanf("%d",&num);
//	temp=num;
//	while(num>0){
//		num=num/10;
//		count=count+1;
//	}
//	num=temp;
//	while(num>0){
//		r=num%10;
//		sum= sum+pow(r,count);
//		num=num/10;
//	}
//	num=temp;
//	if(num==sum)
//		printf("It is armstrong number");
//	else
//		printf("It is not an armstrong number");
		
		printf("Enter a number");
		scanf("%d",&num);
//		for(j=1;j<=num;j++){
//			if(num%j==0){
//				sum=sum+j;
//			}	
//		}
//		if(sum==(num+1)){
//			printf("A prime");
//		}
//		else
//			printf("Not a prime");

	for(i=1;i<=num+1;i++){
		for(j=0;j<(num+1-i);j++){
			printf(" ");
		}
		for(j=0;j<((2*i)-1);j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=num;i>=1;i--){
		for(j=0;j<(num-i);j++){
			printf(" ");
		}
		printf(" ");
		for(j=0;j<((2*i)-1);j++){
			printf("*");
		}
		printf("\n");
	}

	for(i=num;i>=1;i--){
		for(j=0;j<(num-i);j++){
			printf(" ");
		}
		for(j=0;j<((2*i)-1);j++){
			printf("%c",ch++);
		}
		printf("\n");
	}
		
}


