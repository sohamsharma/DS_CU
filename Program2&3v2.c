#include<stdio.h>
#define MAX 100

struct course
{
	int rollno;
    int marks;
    char subject[30];
};

int main()
{
	int n=0, i, item, noOfRecords=0,j,temp,temp3;
	int elements[MAX],position,temp2[MAX];
	char next;
	struct course *ptr;
    int p;
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
					bc:	printf("\nEnter number of records:");
				    	if (scanf("%d", &noOfRecords) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
						{  
					        printf("\nPlease enter a positive number!");
					        goto bc;
				   		}
				   		
				   	   ptr = (struct course*) malloc (noOfRecords * sizeof(struct course));
					   cd:	printf("\nEnter roll number, name of the subject and marks respectively:\n");
					   for(p = 0; p < noOfRecords; ++p)
						{
							printf("\nInput Record:");
							printf("\nEnter Roll Number:");
							if (scanf("%d", &(ptr+p)->rollno) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
								{  
							        printf("\nPlease enter a positive number!");
							        goto cd;
						   		}
						   	printf("\nEnter Subject:");	
							scanf("%s", &(ptr+p)->subject);
						   	printf("\nInput Marks:");
							   if (scanf("%d", &(ptr+p)->marks) < 0 || option < 0 || ((next = getchar()) != EOF && next != '\n')) /* Input Validation */
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
						if (noOfRecords!=0)
						{
						   printf("\nDisplaying Information:\n");
						   printf("\nRoll Number \t Subject \t Marks");						  
						   for(p = 0; p < noOfRecords ; ++p)
						    printf("\n%d\t%s\t%d\n", (ptr+p)->rollno, (ptr+p)->subject, (ptr+p)->marks);
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
						if (noOfRecords!=0)
						{
							for(p = 0; p < noOfRecords; ++p)
								{
								   for ( i = 0 ; i < ( noOfRecords - 1 ) ; i++ )
								   {
								      position = i;						 
								      for ( j = i + 1 ; j < noOfRecords ; j++ )
								      {
								         if ( (ptr+position)->rollno >(ptr+j)->rollno )
								            position = j;
								      }
								      if ( position != i )
								      {
								         temp = (ptr+i)->rollno;
								         strcpy(temp2,(ptr+i)->subject);
								         temp3= (ptr+i)->marks;
								         (ptr+i)->rollno = (ptr+position)->rollno;
								         strcpy((ptr+i)->subject,(ptr+position)->subject);
								         (ptr+i)->marks = (ptr+position)->marks;
								         (ptr+position)->rollno = temp;
								         strcpy((ptr+position)->subject,temp2);
								         (ptr+position)->marks = temp3;
								      }
								   }
								}
						   printf("\nSorting based on roll numbers:\n");
						   printf("\nRoll Number \t Subject \t Marks");						  
						   for(p = 0; p < noOfRecords ; ++p)
						    printf("\n%d\t%s\t%d\n", (ptr+p)->rollno, (ptr+p)->subject, (ptr+p)->marks);
						    
						    
						    for(p = 0; p < noOfRecords; ++p)
								{
								   for ( i = 0 ; i < ( noOfRecords - 1 ) ; i++ )
								   {
								      position = i;						 
								      for ( j = i + 1 ; j < noOfRecords ; j++ )
								      {
								         if ( (ptr+position)->marks >(ptr+j)->marks )
								            position = j;
								      }
								      if ( position != i )
								      {
								         temp = (ptr+i)->rollno;
								         strcpy(temp2,(ptr+i)->subject);
								         temp3= (ptr+i)->marks;
								         (ptr+i)->rollno = (ptr+position)->rollno;
								         strcpy((ptr+i)->subject,(ptr+position)->subject);
								         (ptr+i)->marks = (ptr+position)->marks;
								         (ptr+position)->rollno = temp;
								         strcpy((ptr+position)->subject,temp2);
								         (ptr+position)->marks = temp3;
								      }
								   }
								}
						   printf("\nSorting based on marks:\n");
						   printf("\nRoll Number \t Subject \t Marks");						  
						   for(p = 0; p < noOfRecords ; ++p)
						    printf("\n%d\t%s\t%d\n", (ptr+p)->rollno, (ptr+p)->subject, (ptr+p)->marks);
						    
						    
						    for(p = 0; p < noOfRecords; ++p)
								{
								   for ( i = 0 ; i < ( noOfRecords - 1 ) ; i++ )
								   {
								      position = i;						 
								      for ( j = i + 1 ; j < noOfRecords ; j++ )
								      {
								         if ( (ptr+position)->subject >(ptr+j)->subject )
								            position = j;
								      }
								      if ( position != i )
								      {
								         temp = (ptr+i)->rollno;
								         strcpy(temp2,(ptr+i)->subject);
								         temp3= (ptr+i)->marks;
								         (ptr+i)->rollno = (ptr+position)->rollno;
								         strcpy((ptr+i)->subject,(ptr+position)->subject);
								         (ptr+i)->marks = (ptr+position)->marks;
								         (ptr+position)->rollno = temp;
								         strcpy((ptr+position)->subject,temp2);
								         (ptr+position)->marks = temp3;
								      }
								   }
								}
						   printf("\nSorting based on subjects:\n");
						   printf("\nRoll Number \t Subject \t Marks");						  
						   for(p = 0; p < noOfRecords ; ++p)
						    printf("\n%d\t%s\t%d\n", (ptr+p)->rollno, (ptr+p)->subject, (ptr+p)->marks);
						}
						else
							{
								printf("\nNo data found!");	
							}	
						n=0;
						break;	
				case 4: /* Insertion Sort */
					{
						if (noOfRecords!=0)
						{
						  for (i = 1 ; i <= noOfRecords - 1; i++) {
						    j = i;
						    while ( j > 0 && elements[j] < elements[j-1]) {
						      temp          = elements[j];
						      elements[j]   = elements[j-1];
						      elements[j-1] = temp;
						      j--;
						    }
						  }
						  printf("Sorted list in ascending order:\n");
						  for (i = 0; i <= noOfRecords - 1; i++) {
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
