#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX],n,top,x,i,option,data;
char next;
void push();
void pop();
void display();
void popll();
void pushll(int value);
void displayll();

struct node
{
    int data;
    struct node *link;
};

struct node *topll=NULL,*temp;


void main()
{
	printf("****** STACK IMPLEMENTATION ******");
	top=-1;
ab:	printf("\n Press 1 to implement stacks using ARRAY, Press 2 to implement stacks using LINKED LIST, Press 3 to EXIT:");
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
					printf("\n****** STACKS USING ARRAY ******");
				    printf("\n Enter the size of STACK:");
				    scanf("%d",&n);
				ef:	printf("\nPress 1 to PUSH, Press 2 to POP, Press 3 to display TOP element,Press 4 to EXIT:");
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
								push();
								goto ef;	
							}
							case 2:
							{
								pop();
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
				printf("\n****** STACKS USING LINKED LIST ******");
			kl:	printf("\nPress 1 to PUSH, Press 2 to POP, Press 3 to display TOP element,Press 4 to EXIT:");
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
           					printf(" Enter a value to be pushed:");
					    xy:	if(scanf("%d", &data) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
							{  
						        printf("\n\nPlease enter a positive number!\t");
						        goto xy;
							}
							pushll(data);
							goto kl;	
						}
						case 2:
						{
							popll();
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

/* USING ARRAYS */

void push()
{
    if(top>=n-1)
    {
        printf("\nOVERFLOW");
        getch();
    }
    else
    {
        printf(" Enter a value to be pushed:");
    ij:	if(scanf("%d", &x) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
		{  
	        printf("\n\nPlease enter a positive number!\t");
	        goto ij;
		}
		else
		{
	        top++;
        	stack[top]=x;
		}
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\nUNDERFLOW");
    }
    else
    {
        printf("\nThe popped elements is %d",stack[top]);
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements ion the TOP is: \n");
        printf("\n%d",stack[top]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
}

/* USING LINKED LIST */

pushll(int data)
{
         temp=(struct node *)malloc(sizeof(struct node));
         temp->data=data;
            temp->link=topll;
            topll=temp;
                    
}

popll()
{
            if(topll!=NULL)
            {
                printf("The poped element is %d",topll->data);
                topll=topll->link;
            }
            else
            {
                printf("\nStack Underflow");   
            }
           
}

displayll()
{
         temp=topll;
            if(temp==NULL)
            {
                printf("\nStack is empty\n");
            }
            else
			{
				printf(" %d",temp->data);
			}     
}


