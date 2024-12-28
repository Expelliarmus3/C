#include<stdio.h>
#include<math.h>
void main(){
	int y,x;
	int a=2,p=3,t=5,max,min,d,u,v,z; 
	float b,x1,x2; 
	char c,ch; 
	double d1;
//	scanf("%d%f %c%lf",&a,&b,&c,&d);
//	printf("values are %d %f %c %lf\naddress %u %u %u %u \nsize is %u %u %u %u"
//	,a,b,c,d,&a,&b,&c,&d,sizeof(a),sizeof(b),sizeof(c),sizeof(d));
//	printf("\nAhana Sarkar\n");
//	printf("Roll No. 118");
	
//	a=p+a;
//	p=a-p;
//	a=a-p;
//	printf("%d %d",a,p);

//	printf("Enter a year");
//	scanf("%d",&y);
//	if(y%100!=0 && y%4==0){
//		printf("\nThe year is a leap year");
//	}
//	else if(y%400==0)
//		printf("\nIt is leap year");
//	else
//		printf("\nNot a leap year");


//	max=a>p?a>t?a:t:p>t?p:t;
//	min=a<p?a<t?a:t:p<t?p:t;
//	printf("max is %d",max);
//	printf("\nmin is %d",min);

//	printf("Enter a,b and c");
//	scanf("%d %d %d",&u,&v,&z);
//	d= v*v-4*u*z;
//	if(d==0){
//		printf("Roots are real and equal %lf",(-v/(2.0*u)));
//	}
//	else if(d>0){
//		x1= (-v+ sqrt(d))/(2.0*u);
//		x2= (-v- sqrt(d))/(2.0*u);
//		printf("The roots are %lf %lf",x1,x2);
//	}	
//	else
//		printf("Roots are imaginary");
		
		
		
	printf("Enter the numbers");
	scanf("%d %d",&x,&y);
	printf("Enter the operation");
	scanf(" %c",&ch);
	switch(ch){
		case '+':
			printf("sum is %d",(x+y));
			break;
		case '-':
			printf("difference is %d",(x-y));
			break;
		case '*':
			printf("product is %d",(x*y));
			break;
		case '/':
			if(y!=0){
				printf("division is %f",(x%y));
			}
			else
				printf("division is not possible");
		
	}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
}
