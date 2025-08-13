#include<stdio.h>
#include<string.h>
void main(){
	int l,i,j;
	char s[30]="hello";
	printf("%d",strlen(s));
	for(l=0;l<s[l];l++);
	printf("\n%d\n",l);
	
//	int temp;
//	printf("Enter temp in celcius:");
//	scanf("%d",&temp);
//	printf("\nIn Kelvin=%d",(273+temp));
//	printf("\nIn Farenheit=%d",(temp*9/5)+32);
	
//	int a=0,b=1,c,i;
//	c=a+b;
//	printf("%d %d",a,b);
//	for(i=3;i<=5;i++){
//		printf(" %d",c);
//		a=b;
//		b=c;
//		c=a+b;
//	}

//	for(i=5;i>0;i--){
//		for(j=0;j<i;j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<(5-i);j++){
			printf(" ");
		}
		for(j=0;j<(2*i-1);j++){
			printf("*");
		}
		printf("\n");
		
	}
//	printf("\n");
//	for(i=0;i<5;i++){
//		for(j=0;j<(5-i);j++){
//			printf("*");
//		}
//		for(j=0;j<(2*i-1);j++){
//			printf(" ");
//		}
//		printf("\n");
//		
//	}
	printf("\n");
	for(i=0;i<5;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	
		for(i=0;i<5;i++){
		for(j=0;j<i;j++){
			printf(" ");
		}
		for(j=0;j<5;j++){
			printf("*");
		}
		printf("\n");
		
	}
}
