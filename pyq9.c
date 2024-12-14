#include<stdio.h>
#include<string.h>
#define s 100
void main(){
	int i,j;
	char masterlist[6][10]={"akshay","parag","raman","srinivas","gopal","rajesh"};
	char str[s]="rajesh";
	for(i=0;i<6;i++){
		for(j=0;j<10;j++){
			if(masterlist[i][j]==str){
				printf("You can enter the place");
			}
			else{
				printf("You are a trespasser");
			}
		}
	}
}
