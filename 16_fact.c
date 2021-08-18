/* Find the factorial of a given Natural Number n usingrecursive and non recursive functions */

#include <stdio.h>

long int fact_nr (int n)
	{ 
		long int f=1;
  		
		for(int i=1; i<=n; i++)
       			f = f*i;
  		return f;
	}


long int fact_r (int n)
	{
 	 	if(n>=1)
			return n * fact_r(n-1);
		else
			return 1;
	}


void main()
	{
		int n;
  
  		printf("\n Enter the number: ");
  		scanf("%d",&n);
  
		printf("\n Factorial of %d using non recursive function: %ld \n", n, fact_nr(n));
  		printf("\n Factorial of %d using recursive function: %ld \n", n, fact_r(n));
	}
