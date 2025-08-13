#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int REAR=-1;
int FRONT=-1;
char arr[MAX];
void PUSH(char arr[])
{
	//Read the element to be inserted and position of insertion , then implement
	char x;
	int i;
	
	printf("Enter the element for insertion: ");
	scanf(" %c",&x);
	FRONT=0;
	if (REAR<MAX-1){
		REAR++;
		arr[REAR]=x;
	}
	else{
		printf("Queue Overflow...");
	}
		
		
}

char POP(char arr[])
{
	// Read the postion from where to delete and implement the algorithm
	char y;
	if (FRONT==-1){
		printf("Queue Underflow...");
		return 0;
		
	}
	else if(FRONT==REAR){
		y=arr[FRONT];
		FRONT=-1;
		REAR=-1;
		return y;
	}
	else{
		y=arr[FRONT];
		FRONT++;
		return y;
	}
	
	
}
void display_queue(char arr[]){
	int i;
	if(FRONT!=-1){
		for(i=FRONT;i<=REAR;i++){
			printf("%c\t",arr[i]);
		}
	}
	else{
		printf("Empty Queue");
	}
	
}
int main()
{
	int n,i,j,ch;

	while(1)
	{
		//Menu format
		printf("\n1.PUSH\n2.POP\n3.Display QUEUE\n4.Exit");
		// choose option from menu
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					//calling function to insert at any position
					PUSH(arr);
					break;
			case 2:
					//calling function to delete from any position
					int element;
					element=POP(arr);
					if((FRONT+1)!=-1){
						printf("%c",element);
					}
					
					break;
			case 3:
					//Display the stack
					display_queue(arr);
					break;
			case 4:
					//close the program
					exit(0);
			default:
					//executed when no case matches with control variale
					printf("\nChoice is out of the options");
		}
	}
	return 0;
}
