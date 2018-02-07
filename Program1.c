#include<stdio.h>
#define MAX 100

int main()
{
	int n=0, i, item, k=0;
	int elements[MAX];
	char next;
	printf("\n*****Searching System*****");
	while(n==0)
	{
		int option=0;
	ab:	printf("\n\nPress 1 to ENTER elements \nPress 2 to display ELEMENTS \nPress 3 to search using LINEAR SEARCH \nPress 4 to search using BINARY SEARCH \nPress 5 to EXIT \nSELECT OPTION:");
    	if (scanf("%d", &option) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
		{  
	        printf("\nPlease enter a positive number!");
	        goto ab;
   		}
		else 
		{
			switch(option)
			{
				case 1: /* Input elements */
					{
					bc:	printf("\nEnter total number of elements:");
				    	if (scanf("%d", &k) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
						{  
					        printf("\nPlease enter a positive number!");
					        goto bc;
				   		}
					cd:	printf("\nEnter the elements of the array:");
						for(i=0;i<k;i++)
						{
							if (scanf("%d", &elements[i]) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
								{  
							        printf("\nPlease enter a positive number!");
							        goto cd;
						   		}
						}
						n=0;
						break;	
					}
				case 2: /* Display Elements */
					{
						if (k!=0)
						{
							printf("\nInputted elements are as below:");
							for(i=0;i<k;i++)
							{
								printf("\n%d",elements[i]);
							}
						}
						else
						{
							printf("\nNo data found!");	
						}	
						n=0;
						break;	
					}
				case 3: /* Item search using linear search */
					{
						if (k!=0)
						{
					ef:	printf("\nEnter item to be searched:");
						if (scanf("%d", &item) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
								{ 
							        printf("\nPlease enter a positive number!");
							        goto ef;
						   		}
						for (i=0; i<=k; i++)
					    {
							if (item == elements[i])
						    {
						        printf("\nItem found at location: %d", i+1);
						        break;
						    }
							else
							{
								printf("\nItem not found!");
								break;
							}
						}
						}
						else
						{
							printf("\nNo data found!");	
						}
						n=0;
						break;	
					}		
				case 4: /* Item search using binary search */
					{
						if (k!=0)
						{
					gh:	printf("\nEnter item to be searched:");
						if (scanf("%d", &item) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
								{ 
							        printf("\nPlease enter a positive number!");
							        goto gh;
						   		}
						int i,j;
						int first = 0;
						int last = k - 1;
						int middle = (first+last)/2;
						int temp;
						int flag=0;
						 for(i=0; i<k; i++)
						    {
						        for(j=i+1; j<k; j++)
						        {
						            if(elements[i] > elements[j])
						            {
										flag=1;
						            }
						        }
						    }
						 if(flag==1)
						 {
						 	printf("\nArray is unsorted, it will now beign to SORT!");
						 }
						 for(i=0; i<k; i++)
						    {
						        for(j=i+1; j<k; j++)
						        {
						            if(elements[i] > elements[j])
						            {
						                temp     = elements[i];
						                elements[i] = elements[j];
						                elements[j] = temp;
						            }
						        }
						    }
						printf("\nSorted array is as below:");
						for(i=0;i<k;i++)
							{
								printf("\n%d",elements[i]);
							}
						while (first <= last) 
					   {
					      if (elements[middle] < item)
					        {
					        	first = middle + 1;
							}    
					      else if (elements[middle] == item)
					        {
								printf("\n\n%d found at location %d.\n", item, middle+1);
					        	break;
							}
					      else
					        	last = middle - 1;
					 			middle = (first + last)/2;
					   }
					   if (first > last)
					    {
					    	printf("\nNot found! %d is not present in the list.\n", item);
						}
						}
						else
						{
							printf("\nNo data found!");	
						}
						n=0;
						break;
											
					}
				case 5: /* EXIT */
					{
						printf("\n Thanks for using the SYSTEM! :)");
						n=1;
						return 0;		
					}
				default: /* Invalid input */
					{
				      	printf("\nInvalid input RETRY!");
				      	n=0;
					}
			}
		}
	}
	getch();
    return 0;
}
