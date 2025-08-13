#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int a[MAX];
int top=-1;
//PUSH
void PUSH(int arr[]){
  
    int x;
    printf("Enter the element you want to enter: ");
    scanf("%d",&x);
    if(top<MAX-1){
        top++;
        arr[top]=x;
        printf("%d",top);
    }
    else
        printf("Stack Overflow...\n");
}
//POP
int POP(int arr[]){
    int y;
    if(top>-1){
        y=arr[top];
        top--;
        printf("%d",y);
    }
    else
        printf("Stack underflow...\n");
}
//DISPLAY
void DISPLAY(int arr[]){
    int i;
	if(top==-1){
		printf("Empty Stack\n");
		
	}
	else{
		for(i=top;i>=0;i--){
			printf("%d\t",arr[i]);
		}	
	}
	
    
}
int main(){
    int ch;
    while(1){
        printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            PUSH(a);
            break;
        case 2:
            POP(a);
            break;
        case 3:
            DISPLAY(a);
            break;
        case 4:
            exit(0);
        
        default:
            printf("No options matched...");
        }
    }
    return 0;
}
