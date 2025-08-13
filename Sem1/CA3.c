#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int roll;
	char name[30];
	int marks;
	int contact;
}std;
void main(){
	std *ptr;
	int i,n,r;
	printf("Enter no. of students: ");
	scanf("%d",&n);
	ptr=(std *)malloc(n*sizeof(std));
	for(i=0;i<n;i++){
		printf("Enter name,roll,marks and contact for student %d",(i+1));
		fflush(stdin);
		scanf("%s %d %d %d",(ptr+i)->name,&(ptr+i)->roll,&(ptr+i)->marks,&(ptr+i)->contact);
	}
	printf("\nEnter the roll number of students whose data you want to display:");
	scanf("%d",&r);
	
	for(i=0;i<n;i++){
		if((ptr+i)->roll==r)
			printf("\nName=%s roll=%d marks=%d contact=%d for student %d\n",(ptr+i)->name,(ptr+i)->roll,(ptr+i)->marks,(ptr+i)->contact,(i+1));
	}

}
