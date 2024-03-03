#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int front = -1, rear = -1; // global variable
char CQueue[MAX];
void Enqueue();
void Dequeue();
void Display();
int main()
{
 int choice;
 while(1)
 {
 printf("\nCIRCULAR QUEUE OPERATIONS USING ARRAY\n\n");
 printf("1.INSERT\n");
 printf("2.DELETE\n");
 printf("3.DISPLAY\n");
 printf("4.EXIT \n");
 printf("Enter your choice : ");
 scanf("%d", &choice);
 switch (choice)
 {
 case 1:Enqueue();
 break;
 case 2:Dequeue();
 break;
 case 3:Display();
break;
 case 4:exit(1);
 default:printf("\nInvalid Choice\n");
 }
 }
}
void Enqueue()
{
char item;
if ((front == 0 && rear == MAX - 1) || front == rear + 1)
{ // front==rear + 1 occurs when an element is inserted at
// 0th position due to circular increment and rear value is just one less than front i.e 
front = 1 and rear =0
printf("\nCircular Queue is Full \n");
}
else
{
printf("Enter the element to insert into the Circular Queue :\n ");
scanf(" %c", &item);
 if (front == -1)
 front = 0;
 rear = (rear + 1) % MAX;
 CQueue[rear] = item;
}
}
void Dequeue()
{
if((front==-1) && (rear==-1)) // condition to check queue is empty
{
printf("\nCircular Queue is Underflow\n");
}
else if(front==rear) //Q has only one element, so we reset the
// queue after dequeue operation
{
 printf("\nThe Dequeued Element is %c:", CQueue[front]);
 front=-1;
 rear=-1;
}
else
{
printf("\nThe Dequeued Element is %c:", CQueue[front]);
front=(front+1)%MAX;
}
}
void Display()
{
int i;
if (front == -1 && rear == -1)
{
 printf("\nThe Circular Queue is Empty \n");
}
else
{
printf("\nElements in a Circular Queue are :");
 if (front > rear)
 {
 for (i = front; i < MAX; i++)
 {
 printf("%c ", CQueue[i]);
 }
 for (i = 0; i <= rear; i++)
 printf("%c ", CQueue[i]);
 }
 else
 {
 for (i = front; i <= rear; i++)
 printf("%c ", CQueue[i]);
 }
}
}
