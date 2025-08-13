#include<stdio.h>
#include<stdlib.h>
void main(){
	char ch;
	FILE *rptr,*wptr;
	rptr=fopen("Profile.txt","r");
	if(rptr==NULL){
		printf("File not found");
		exit(0);
	}
	wptr=fopen("myProfile.txt","w");
	if(wptr==NULL){
		printf("File could not be opened");
		fclose(rptr);
		exit(0);
	}
	while(1){
		ch=fgetc(rptr);
		if(ch==EOF){
			break;
		}
		fputc(ch,wptr);
	}
	fclose(rptr);
	fclose(wptr);
}
