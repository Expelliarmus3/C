#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int REAR=-1;
int FRONT=-1;
int arr[MAX];
void ENQUEUE(int arr[])
{
	//Read the element to be inserted and position of insertion , then implement
	int x;
	int i;
	
	printf("Enter the element for insertion: ");
	scanf("%d",&x);
	
	if ((REAR==MAX-1 && FRONT==0)||FRONT==REAR+1){
		printf("Queue Overflow...");
		
	}
	else{
		if(FRONT==-1 && REAR==-1){
			FRONT=0;
			REAR=0;
		}
		else if(REAR==MAX-1){
			REAR=0;
		}
		else{
			REAR++;
		}
		arr[REAR]=x;
	}
		
		
}

int DEQUEUE(int arr[])
{
	// Read the postion from where to delete and implement the algorithm
	int y;
	if (FRONT==-1){
		printf("Queue Underflow...");
		return 0;
		
	}
	else {
		if(FRONT==REAR){
		y=arr[FRONT];
		FRONT=-1;
		REAR=-1;
		return y;
		}
		else if(FRONT==MAX-1){
			FRONT=0;
		}
		else{
			y=arr[FRONT];
			FRONT++;
			return y;
		}
	}
	
	
}
void display_queue(int arr[]){
	int i;
	if(FRONT==-1){
		printf("Empty Queue");
		
	}
	else{
		if(FRONT<=REAR){
			for(i=FRONT;i<=REAR;i++){
				printf("%d\t",arr[i]);
			}
		}
		else{
			for(i=FRONT;i<=MAX-1;i++){
				printf("%d\t",arr[i]);
			}
			for(i=0;i<=REAR;i++){
				printf("%d\t",arr[i]);
			}
			
			
		}
		printf("\nFRONT=%d REAR=%d",FRONT,REAR);
		
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
					ENQUEUE(arr);
					break;
			case 2:
					//calling function to delete from any position
					int element;
					element=DEQUEUE(arr);
					if((FRONT+1)!=-1){
						printf("%d",element);
					}
					
					break;
			case 3:
					//Display the queue
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
