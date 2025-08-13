#include<stdio.h>
#include<stdlib.h>
#define MAX 5


int arr[MAX];
int Linear(int arr[])
{
	//Enter elemnts to array
	//Enter element to search
	//Perform Linear search

		
}

int Binary(int arr[])
{

	
	
}
int Interpolation(int arr[]){
	
	
}
int main()
{
	int n,i,j,ch;

	while(1)
	{
		//Menu format
		printf("\n1.Linear Search\n2.Binary search\n3.Interpolation Search\n4.Exit");
		// choose option from menu
		printf("\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
					//Linear Search
					Linear(arr);
					break;
			case 2:
					//Binary search
					
					Binary(arr);
					break;
			case 3:
					//Interpolation Search
					Interpolation(arr);
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
