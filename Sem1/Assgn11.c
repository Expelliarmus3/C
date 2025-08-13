#include<stdio.h>
#include<math.h>
void main(){
	int sum = 0,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
    for (i = 1; i <= n; i++) { //extracting divisors
        if (n % i == 0) {
            sum += i; //extracting sum of divisors
        }
    }
   
    if (sum > (n + 1)) { //using sum of divisors for checking prime
       printf("The no. is not prime");
    } 
	else
        printf("The no. is prime");


}
