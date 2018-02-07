/* CAR RENTAL SERVICE */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void display_design();

int flag = 0;
char next;

struct node
{
    int data;
    struct node *next;
}*head,*var,*trav;

void display_design()
{
	printf("\n\n\t *********CAR RENTAL SERVICE*********\n");
}


void insert_at_begining(int value)
{
     var=(struct node *)malloc(sizeof (struct node));
     var->data=value;
     if(head == NULL)
     {
         head=var;
         head->next=NULL;
     }
     else
     {
         var->next=head;
         head=var;
     }
     flag += 1;
}

void insert_at_end(int value)
{
      struct node *temp; 
      temp=head;
      var=(struct node *)malloc(sizeof (struct node));
      var->data=value;
      if(head == NULL)
      {
          head=var;
          head->next=NULL;
      }
      else
      {
          while(temp->next!=NULL)
          {     
               temp=temp->next;
          }
          var->next=NULL;
          temp->next=var;
      }
      flag += 1;
}

void insert_at_middle(int value, int loc)
{
     struct node *var2,*temp;
     var=(struct node *)malloc(sizeof (struct node));
     var->data=value;
     temp=head;

     if(head == NULL)
     {
          head=var;
          head->next=NULL;
     }
     else
     {
        int i;
	    struct node *temp,*left,*right;
	    right=head;
	    for(i=1;i<loc;i++)
	    {
		    left=right;
		    right=right->next;
	    }
	    temp=(struct node *)malloc(sizeof(struct node));
	    temp->data=value;
	    left->next=temp;
	    left=temp;
	    left->next=right;
     }
     flag += 1;
}

int delete_from_middle(int value)
{
     struct node *temp,*var;
     temp=head;
     while(temp != NULL)
     {
          if(temp->data == value)
          {
                if(temp == head)
                {
                     head = temp->next;
                     free(temp);
                     return 0;
                }
                else
                {
                     var->next = temp->next;
                     free(temp);
                     return 0;
                }
          }
          else
          {
               var = temp;
               temp = temp->next;
          }
     }
printf("data deleted from list is %d",value);

flag -= 1;
}

int delete_from_end()
{
     struct node *temp;
     temp = head;
     while(temp->next != NULL)
     {
          var = temp;
          temp = temp->next;
     }
     if(temp == head)
     {
          head = temp->next; 
          free(temp);
          return 0;
     }
     printf("Data deleted from list is %d",temp->data);
     var->next = NULL;
     free(temp);
     return 0;
     
     flag -= 1;
}

void display()
{
     trav = head;
     if(trav == NULL)
     {
          printf("\nList is Empty");
     }
     else
     {
          printf("\n\nISSUED ORDER NUMBERS ARE ");
          while(trav != NULL)
          {
               printf(" -> %d \n",trav->data);
               trav = trav->next;
          }
      printf("\n");
      }
}

int main()
{
     char choice;
	 int i=0;
     head = NULL;
     do
     {
     	system("cls");
     display_design();
     printf("\n\nPLEASE SELECT AN OPTION FROM BELOW ->\n\n");
     printf("\n 1. Issue an order number to the first rental");
     printf("\n 2. Issue an order number to the last rental");
     printf("\n 3. Issue an order number at a manual location");
     printf("\n 4. Delete the last rental record");
     printf("\n 5. Delete the record manually");
     printf("\n 6. Exit\n");
     display();
	printf("\n\nEnter the choice of operation to perform\nInput:\t");
cd:	if(scanf("%d", &i) < 0 || i < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
	{  
	printf("\n\nPlease enter a positive number!\t");
	goto cd;
	}
	else
	{
	switch(i)
	{
	    case 1:
	    {
	     int value;
	     printf("\nEnter the order number for first rental\nInput:\t");
ef:	     if(scanf("%d", &value) < 0 || value < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
			printf("\n\nPlease enter a positive number!\t");
			goto ef;
			}
		else
		{
			 insert_at_begining(value);
		     printf("\nOrder number issued to the first rental and added to the database");
		     display(); 
		}               
	     break; 
	    }
	    case 2:
	    {  
	    int value;
	    printf("\nEnter the order number for last rental\nInput:\t");
gh:	    if(scanf("%d", &value) < 0 || value < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
			printf("\n\nPlease enter a positive number!\t");
			goto gh;
			}
	    else
		    {
			     insert_at_end(value);
			     printf("\nOrder number issued to the last rental and added to the database");
			     display();
			}
	    break;
	    }
	    case 3:
	    {
	    int value,loc;
	    printf("\nEnter manual location\nInput:\t");
ij:	    if(scanf("%d", &loc) < 0 || loc < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
			printf("\n\nPlease enter a positive number!\t");
			goto ij;
			}
		else
		{
			printf("\nEnter order number to be issued\nInput:\t");
kl:		    if(scanf("%d", &value) < 0 || value < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
				printf("\n\nPlease enter a positive number!\t");
				goto kl;
			}
			else
			{
				insert_at_middle(value,loc);
		    	display();	
			}
		}
	    break;
	    }
	    case 4:
	    {
	    delete_from_end();
	    display();
	    break;
	    }
	    case 5:
	    {
	    int value;
	    display();
	    printf("\nEnter the record to be removed\nInput:\t");
mn:	    if(scanf("%d", &value) < 0 || value < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
				printf("\n\nPlease enter a positive number!\t");
				goto ij;
			}
		else
		{
			 delete_from_middle(value);
	   		 display();
		}
	    break;
	    }
	    case 6:
	    {
	    exit(0);
	    } 
		default:
		{
			printf("\n\nINVALID INPUT RETRY");
			break;
		} 
	}
}
printf("\n\nDo you wish to continue? {y/n}\nInput:\t");
           fflush(stdin);
		   scanf("%c",&choice);
		   if(choice=='n' || choice == 'N')
		   {
		   		exit(0);
		   }
      } while(choice == 'y' || choice == 'Y');
getch();
}
