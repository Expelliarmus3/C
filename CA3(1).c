#include<stdio.h>
#define s 100
void main(){
	int i = 0, j = 1, k, m, n, b[s],ans;
 // Range is 10
 	printf("Enter the range");
 	scanf("%d",&n);
    b[1] = 0;
    b[2] = 1;
 // Check if range is less equals to 1
    if (n <= 1) {
        printf("You have enter a wrong range");
    }
    else {
 // Loop to calculate fibonacci series till range
        for (m = 2; m < n; m++) {
            k = i + j;
            i = j;
            j = k;
 // Store fibonacci series into b[] array
            b[m] = k;
        }
 		i = 5;
        printf("\nThe Non-Fibonacci series that lies between 1 to %d term of Fibonacci Series is: \n",n);
 // Loop to calculate Non-Fibonacci series
        for (ans = 4; ans < n; ans++) {
            if (ans != b[i])
                printf("%d  ", ans);
            else
                i++;
        }
    }

}
