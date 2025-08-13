#include<stdio.h>
#include<stdlib.h>
typedef struct students{
	char name[30];
	int marks;
	
}std;
void main(){
	std *ptr;
	int i,n,max,second_max;
	printf("Enter number of students:");
	scanf("%d",&n);
	ptr=(std*)malloc(n*sizeof(std));
	for(i=0;i<n;i++){
		printf("Enter name and marks");
		scanf("%s%d",(ptr+i)->name,&(ptr+i)->marks);
	}
	for(i=0;i<n;i++){
		//printf("Enter name and marks");
		printf("name= %s marks=%d",(ptr+i)->name,(ptr+i)->marks);
		printf("\n");
	}
	max=(ptr+0)->marks;
	for(i=0;i<n;i++){
		if((ptr+i)->marks>max){
			max=(ptr+i)->marks;
		}
	}
	printf("%d",max);
	
	second_max=(ptr+0)->marks;
	for(i=0;i<n;i++){
		if((ptr+i)->marks<max && (ptr+i)->marks>second_max){
			second_max=(ptr+i)->marks;
		}
	}
	printf("\n%d",second_max);
}
