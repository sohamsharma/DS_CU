#include<stdio.h>
#define MAX 100

int main()
{
	int n=0, i, item, k=0,j,temp;
	int elements[MAX],position;
	char next;
	printf("\n*****Sorting System*****");
	while(n==0)
	{
		int option=0;
	ab:	printf("\n\nPress 1 to ENTER elements \nPress 2 to display ELEMENTS \nPress 3 to sort using SELECTION SORT \nPress 4 to sort using INSERTION SORT \nPress 5 to EXIT \nSELECT OPTION:");
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
				case 3: /* Selection Sort */
					{
						if (k!=0)
						{
						   for ( i = 0 ; i < ( k - 1 ) ; i++ )
						   {
						      position = i;						 
						      for ( j = i + 1 ; j < k ; j++ )
						      {
						         if ( elements[position] >elements[j] )
						            position = j;
						      }
						      if ( position != i )
						      {
						         temp = elements[i];
						         elements[i] = elements[position];
						         elements[position] = temp;
						      }
						   }
						   printf("Sorted list in ascending order:\n");
						   for ( i = 0 ; i < k ; i++ )
						      printf("%d\n", elements[i]);
						}
						else
							{
								printf("\nNo data found!");	
							}	
						n=0;
						break;	
				case 4: /* Insertion Sort */
					{
						if (k!=0)
						{
						  for (i = 1 ; i <= k - 1; i++) {
						    j = i;
						    while ( j > 0 && elements[j] < elements[j-1]) {
						      temp          = elements[j];
						      elements[j]   = elements[j-1];
						      elements[j-1] = temp;
						      j--;
						    }
						  }
						  printf("Sorted list in ascending order:\n");
						  for (i = 0; i <= k - 1; i++) {
						    printf("%d\n", elements[i]);
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
	}
	getch();
    return 0;
}
