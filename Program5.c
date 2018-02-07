#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100

int arrayqueue[MAX],option,p=1;
int rear = - 1;
int front = - 1;
char next;
void enqueue();
void dequeue();
void display();
void enqueuell();
void dequeuell();
void displayll();

typedef struct node
	{
		int data;
		struct node *link;
	}n;
n *frontll=NULL;
n *rearll=NULL;

void main()
{
	printf("****** QUEUE IMPLEMENTATION ******");
ab:	printf("\n \n Press 1 to implement queue using ARRAY, Press 2 to implement queue using LINKED LIST, Press 3 to EXIT:");
cd: if(scanf("%d", &option) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
	{  
        printf("\n\nPlease enter a positive number!\t");
        goto cd;
	}
	else
	{
		switch(option)
		{
			case 1:
				{
					printf("\n****** QUEUE USING ARRAY ******");
				ef:	printf("\nPress 1 to ENQUEUE, Press 2 to DEQUEUE, Press 3 to display element,Press 4 to go to MAIN MENU:");
				gh:	if(scanf("%d", &option) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
					{  
				        printf("\n\nPlease enter a positive number!\t");
				        goto gh;
					}
					else
					{
						switch(option)
						{
							case 1:
							{
								enqueue();
								goto ef;	
							}
							case 2:
							{
								dequeue();
								goto ef;
							}
							case 3:
							{
								display();
								goto ef;
							}
							case 4:
							{
								break;
							}
							default:
							{
								printf ("\n Invalid input RETRY: ");
								goto gh;			
							}
						}
					}
				goto ab;			
			}
			case 2:
			{
				printf("\n****** QUEUE USING LINKED LIST ******");
			kl:	printf("\nPress 1 to ENQUEUE, Press 2 to DEQUEUE, Press 3 to display element,Press 4 to go to MAIN MENU:");
			mn:	if(scanf("%d", &option) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
				{  
			        printf("\n\nPlease enter a positive number!\t");
			        goto gh;
				}
				else
				{
					switch(option)
					{
						case 1:
						{
           					enqueuell();
							goto kl;	
						}
						case 2:
						{
							dequeuell();
							goto kl;
						}
						case 3:
						{
							displayll();
							goto kl;
						}
						case 4:
						{
							break;
						}
						default:
						{
							printf ("\n Invalid input RETRY: ");
							goto mn;			
						}
					}
				}
				goto ab;
			}
			case 3:
			{
				printf("\n Thanks for using the SYSTEM! :)");
				break;
			}
			default:
			{
				printf ("\n Invalid input RETRY: ");
				goto cd;
			}	
		}			
	}
return 0;
}


/*IMPLEMENTATION USING ARRAY */

enqueue()
{
    int itemadd;
    if (rear == MAX - 1)
    printf("\nQueue Overflow");
    else
    {
        if (front == - 1)
        	front = 0;
        printf("\nInsert the element in queue : ");
    pq:	if(scanf("%d", &itemadd) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
		{  
	        printf("\n\nPlease enter a positive number!\t");
	        goto pq;
		}
		else
		{
		    rear = rear + 1;
		    arrayqueue[rear] = itemadd;
        	p=0;
    	}
	    }
}
 
dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("\nQueue Underflow");
        p=1;
    }
    else
    {
        printf("\nElement deleted from queue is : %d\n", arrayqueue[front]);
        front = front + 1;
        if (front == - 1 || front > rear)
	    {
		    p=1;
	    }
	}
} 

display()
{
	if(p==0)
	{
		int i;
	    if (front == - 1)
       		printf("\nQueue is empty");
	    else
	    {
	        printf("\nQueue front : %d",arrayqueue[front]);
			printf("\nQueue rear: %d ", arrayqueue[rear]);
	    }
	}
	else
	{
		printf("\n\nEmpty Queue!");
	}
}



/* IMPLEMENTATION USING LINKED LIST */

enqueuell()
 {
	 int item;
	 n *temp;
	 printf("\nInsert the element in queue : ");
	 scanf("%d",&item);
	 temp=(n*)malloc(sizeof(n));
	 temp->data=item;
	 temp->link=NULL;
	 if(rearll==NULL)
	  {
		  frontll=temp;
		  rearll=temp;
	  }
	 else
	  {
		  rearll->link=temp;
		  rearll=temp;
	  }
	  p=0;
 }

dequeuell()
 {
	 int item;
	 if(frontll==NULL)
		 {
		 	printf("Queue is empty\n");
			p=1;
		 }
	 else
	  {
		  item=frontll->data;
		  printf("The element deleted = %d\n",item);
	  }
	 if(frontll==rearll)
	  {
		  frontll=NULL;
		  rearll=NULL;
		  if(frontll==NULL)
		  p=1;
	  }
	 else
		 frontll=frontll->link;
 }

displayll()
 {
 	if(p==0)
 	{
 		n *ptr;
		if(frontll==NULL)
			 printf("Queue is empty\n");
		else
		{
		  ptr=frontll;
		  printf("The elements of the queue are :");
		  while(ptr!=NULL)
			   {
				   printf("%d\t",ptr->data);
				   ptr=ptr->link;
			   }
		}	
	}
	else
	{
		printf("\nQueue is empty!");
	}
	
 }
