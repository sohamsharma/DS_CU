/* CAR RENTAL SERVICE */


#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct node
{
    int data;
    struct node *next;
}*head,*var,*trav;

int option,total,i,arr[MAX],n,j,pivot,pi,enable=0,flag=0,k;
char next;

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

void display_ll()
{
     trav = head;
     if(trav == NULL)
     {
          printf("\nList is Empty");
     }
     else
     {
          printf("\n\nInput:");
          while(trav != NULL)
          {
               printf(" -> %d ",trav->data);
               trav = trav->next;
          }
      }
}

void insert()
	{
		printf("\n\nEnter total number of elements to be inserted:");
	ef:	if(scanf("%d", &total) < 0 || total < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
				printf("\n\nPlease enter a positive number!\t");
				goto ef;
			}
		else
		{
			printf("\n\nENTER ELEMENTS:");
			for(i=0;i<total;i++)
			{
			gh:	if(scanf("%d",&arr[i]) < 0 || &arr[i] < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
				{  
					printf("\n\nPlease enter a positive number!\t");
					goto gh;
				}
			}
			printf("\n\n Entered elements are as below:");
			for(i=0;i<total;i++)
			{
				printf("\n%d",arr[i]);
			}
			enable=1;
		}
	}

void display()
	{
		printf("\n\n Entered elements are as below:");
		for(i=0;i<total;i++)
		{
			printf("\n%d",arr[i]);
		}
	}

void sort_ll()
	{
		printf("\n\nEnter total number of elements to be inserted:");
	ij:	if(scanf("%d", &total) < 0 || total < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
				printf("\n\nPlease enter a positive number!\t");
				goto ij;
			}
		else
		{
			printf("\n\nENTER ELEMENTS:");
			for(i=0;i<total;i++)
			{
				kl:	if(scanf("%d",&arr[i]) < 0 || &arr[i] < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
					{  
						printf("\n\nPlease enter a positive number!\t");
						goto kl;
					}
					else
					{
						insert_at_begining(arr[i]);
					}
			}
			display_ll();	
			int arr_size = total;
		    mergeSort(arr, 0, arr_size - 1);
		    printf("\n\nSorted array:\n");
		    display3(arr,arr_size);
		}
	}

void display2(int arr[], int size)
{
	printf("\n\n Ascending:");
    for(i=0; i < size; i++)
    printf("\n%d ", arr[i]);
    
    printf("\n\n Descending:");
    for(i=size-1; i >=0; i--)
    printf("\n%d ", arr[i]);
}

void display3(int arr[], int size)
{
	printf("\n\n Ascending:");
    for(i=0; i < size; i++)
    printf("%d-> ", arr[i]);
    
    printf("\n\n Descending:");
    for(i=size-1; i >=0; i--)
    printf("%d-> ", arr[i]);
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 

    int L[n1], R[n2];
 
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    i = 0;
    j = 0;
    k = l; 
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m+1, r);
        merge(arr, l, m, r);
    }
}

int main()
	{
		{	
	cd:		printf("\n\n********* CAR RENTAL REGISTERATION NUMBER SORTING SYSTEM *********");
			printf("\n\n\t Press 1 to ENTER elements");
			printf("\n\t Press 2 to DISPLAY elements");
			printf("\n\t Press 3 to SORT using MERGE SORT using ARRAY");
			printf("\n\t Press 4 to SORT using MERGE SORT using LINKED LIST");
			printf("\n\t Press 5 to EXIT");
			printf("\n\t Input:");
	ab:	    if(scanf("%d", &option) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
			{  
				printf("\n\nPlease enter a positive number!\t");
				goto ab;
			}
			else
			{
				switch(option)
					{
						case 1:
							{
								insert();
								goto cd;
							}
						case 2:
							{
								display();
								goto cd;
							}
						case 3:
							{
								if(enable==1)
								{								
   									int arr_size = total;
   								    mergeSort(arr, 0, arr_size - 1);
								    printf("\n\nSorted array:\n");
								    display2(arr,arr_size);
									goto cd;	
								}
								else
								{
									printf("\n\nEmpty array!");
									goto cd;
								}

							}
						case 4:
							{
								sort_ll();
								goto cd;	
							}
						case 5:
							{
								exit(0);
							}
						default:
							{
								printf("\n\nInvalid Input!");
								goto ab;
							}
					}	
			}
		}
		return 0;
	}
