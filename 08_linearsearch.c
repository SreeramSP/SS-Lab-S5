/* Read n integers, store them in an array and search for an element in the array using an algorithm for Linear Search */

#include<stdio.h>

int Lsearch( int[], int, int);

void main()
	{
		int arr[25], element, size, pos;

		printf("\n Enter size of array: ");
		scanf("%d", &size);
	
		printf("\n Enter array elements: ");
		for(int i=0; i<size; i++)
			scanf("%d", &arr[i]);

		printf("\n Enter the element to be Searched for: ");
		scanf("%d", &element);

		pos = Lsearch( arr, size, element);

		if(pos!=-1)
			printf("\n The seached Element %d found at postion %d \n", element, pos+1);
		else
			printf("\n Element not found! \n"); 
	}


int Lsearch( int a[25], int n, int ele)
	{
		for( int i=0; i<n; i++)
			{
				if(a[i]==ele)
					return i;
			}
		
		return -1;
	}		
		
