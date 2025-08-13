#include<stdio.h>
#include<stdlib.h>

//Implementation of array data structure 
void insertAtPos(int arr[],int*n)
{
	int x,p,i;
	//Read the element to be inserted and position of insertion , then implement
	printf("Element to be inserted: ");
	scanf("%d",&x);
	printf("Enter the position you want to insert: ");
	scanf("%d",&p);
	p=p-1;
	for(i=*n-1;i>=p;i--){
		arr[i+1]=arr[i];
	}
	arr[p]=x;
	*n+=1;
	
}

void deleteFromPos(int arr[], int*n)
{
	int p,i;
	// Read the postion from where to delete and implement the algorithm
	printf("Position: ");
	scanf("%d",&p);
	p--;	
	for(i=p;i<*n;i++){
		arr[i]=arr[i+1];
	}
    *n=*n-1;
	
	
}
void display(int arr[],int*n)
{
	int i;
	for(i= 0 ;i <*n  ;   i++ )
	{
		printf("%d\t",arr[i]);
	}
}
int main()
{
	int arr[20],n,i,j,ch;
	// n number of elemnts, input n
	printf("Enter number of elements in an array");
	scanf("%d",&n);
	//enter n elements in the array arr[]
	printf("\nEnter array elements ");
	for(i= 0 ;i <n ;i++ )
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		//Menu format
		printf("\n1.Insert at any position\n2.Delete from any position\n3.Display\n4.Exit");
		// choose option from menu
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					//calling function to insert at any position
					insertAtPos(arr,&n);
					break;
			case 2:
					//calling function to delete from any position
					deleteFromPos(arr,&n);
					break;
			case 3:
					//Display the array
					display(arr,&n);
					break;
					
			case 4: //Exit the program
					exit(0);
			default:
					//executed when no case matches with control variale
					printf("\nChoice is out of the options");
		}
	}
	return 0;
}
