#include<stdio.h>
#define PI 3.14
void main(){
    int r;
    float area;
    printf("Enter the value of radius");
    scanf("%d",&r);
    area= PI*r*r;
    printf("%f",area);
}