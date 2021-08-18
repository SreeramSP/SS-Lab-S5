/* Read n integers, store them in an array and sort the elements in the array using Bubble Sort algorithm */

#include<stdio.h>

void bubble (int[], int);

void main()
	{
		int a[50], size;
		
		printf("\n Enter the size of the array: ");
		scanf("%d", &size);

		printf("\n Enter array of numbers : ");
		for(int i=0; i<size; i++)
			scanf("%d", &a[i]);

		bubble(a,size);
	}

void bubble ( int a[], int n)
	{
		int temp;
		
		for(int i=0; i<n-1; i++)
			{
				for(int j=0; j<n-i-1; j++)
					{
						if(a[j] > a[j+1])
							{
								temp = a[j];
								a[j] = a[j+1];
								a[j+1] = temp;
							}
					
					}	


				printf("\n After Pass %d : ", i);
				for(int k=0; k<n; k++)
					printf("%d | ", a[k]);
					

				
			}

		printf("\n The BubbleSorted Array is: ");
		for(int i=0; i<n; i++)
			printf("%d | ", a[i]);
		
		printf("\n");
	}
