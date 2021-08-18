/* Read 3 integer values and find the largest among them */

#include<stdio.h>

void main()
	{ 
  		int a,b,c;
          
        	printf("\n Enter 3 numbers: ");
          	scanf("%d%d%d",&a,&b,&c);
 	


		if(a>b && a>c)
			printf("a=%d is largest",a);
		
	 	else if(b>c && b>a)
			printf("b=%d is largest",b);
		
	   	else
			printf("c=%d is largest",c);

        }
		
