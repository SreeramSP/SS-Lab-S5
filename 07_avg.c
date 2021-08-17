/* Read n integers, store them in an array and find their sum and average */

#include<stdio.h>

void main()
	{
		int arr[25], n, sum=0;
		float avg;

		printf("\n Enter the value for n : ");
		scanf("%d", &n);

		printf("\n Enter %d numbers into Array : ", n);
		for(int i=0; i<n; i++)
			{
				scanf("%d", &arr[i]);
				sum += arr[i];
			}

		avg = sum/n;

		printf("\n Sum and Average are %d and %.2f respectively \n", sum, avg);
	}

		

		
