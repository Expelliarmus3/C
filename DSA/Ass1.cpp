#include<stdio.h>
#include<stdlib.h>
//Implementation of array data structure 
void insertAtPos(int arr[],int*n)
{
	//Read the element to be inserted and position of insertion , then implement
	int x,p,i;
	printf("Enter the element and the position of insertion: ");
	scanf("%d %d",&x,&p);
	p=p-1;
	
	for(i=*n-1;i>=p;i--){
		arr[i+1]=arr[i];
	}
	arr[p]=x;
	*n=*n+1;
}

void deleteFromPos(int arr[],int*n)
{
	// Read the postion from where to delete and implement the algorithm
	int p,i;
	printf("Enter the the position of deletion: ");
	scanf("%d",&p);
	p=p-1;

	for(i=p;i<*n-1;i++){
		arr[i]=arr[i+1];
	}
	
	*n=*n-1;
}
void display_array(int arr[],int*n){
	int i;
	for(i=0;i< *n;i++){
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
	for(i= 0 ;i <n  ;   i++ )
	{
		scanf("%d",&arr[i]);
	}
	while(1)
	{
		//Menu format
		printf("\n1.Insert at any position\n2.Delete from any position\n3.Display array\n4.Exit");
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
					display_array(arr,&n);
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
