#include<stdio.h>
#include<stdlib.h>

int top=-1;
int arr[5];
void PUSH(int arr[])
{
	//Read the element to be inserted and position of insertion , then implement
	int x,i;
	printf("Enter the element for insertion: ");
	scanf("%d",&x);
	if (top<=5){
		top++;
		arr[top]=x;
	}
	else{
		printf("Stack Overflow...");
	}
		
		
}

int POP(int arr[])
{
	// Read the postion from where to delete and implement the algorithm
	int y;
	if (top==-1){
		printf("Stack Underflow...");
		return 0;
		
	}
	else{
		y=arr[top];
		top--;
		return y;
	}
	
	
}
void display_stack(int arr[]){
	int i;
	if(top!=-1){
		for(i=top;i>=0;i--){
			printf("%d\t",arr[i]);
		}
	}
	else{
		printf("Empty Stack");
	}
	
}
int main()
{
	int n,i,j,ch;

	while(1)
	{
		//Menu format
		printf("\n1.PUSH\n2.POP\n3.Display STACK\n4.Exit");
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
					if((top+1)!=-1){
						printf("%d",element);
					}
					
					break;
			case 3:
					//Display the stack
					display_stack(arr);
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
