#include<stdio.h>
#include<stdlib.h>
#define MAX 5

int a[MAX];
int rear=-1;
int front=-1;
//PUSH
void ENQUEUE(int arr[]) {
    int x;
    printf("Enter the element you want to enter: ");
    scanf("%d", &x);
    if (rear < MAX - 1) {
        if (front == -1) front = 0; // Only set front on first enqueue
        rear++;
        arr[rear] = x;
        printf("%d", rear);
    } else {
        printf("Queue Overflow...\n");
    }
}
//POP
int DEQUEUE(int arr[]) {
    int y;
    if (front == -1 || front > rear) {
        printf("Queue Underflow...\n");
        return -1;
    } else {
        y = arr[front];
        front++;
        printf("%d", y);
        // Reset if queue becomes empty
        if (front > rear) {
            front = rear = -1;
        }
        return y;
    }
}
//DISPLAY
void DISPLAY(int arr[]) {
    int i;
    if (front == -1 || front > rear) {
        printf("Empty Queue\n");
    } else {
        for (i = front; i <= rear; i++) {
            printf("%d\t", arr[i]);
        }
    }
}
int main(){
    int ch;
    while(1){
        printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\nEnter your choice: ");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            ENQUEUE(a);
            break;
        case 2:
            DEQUEUE(a);
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
