/* Read a Natural Number and check whether the number is Armstrong or not */

#include<stdio.h>

void main()
	{
		int num, rem, sum = 0;

		printf("\n Enter number: ");
		scanf("%d", &num);
		
		while(num!=0)
			{
				
				rem = num%10;
				sum += rem*rem*rem;
				num = num/10;			
			}	
				
		
		
		
		if (sum == num)
			printf("\n Entered Number is Armstrong! \n");
		
		else
			printf("\n Number is not an Armstrong... \n");
	}
		
