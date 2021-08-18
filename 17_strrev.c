/* Read a string (word), store it in an array and obtain its reverse by using a user defined function */

#include <stdio.h>
#include <string.h>

void reverse_str(char str[])
	{ 
		int i,n;
  		char c;
  		
		n = strlen(str);
  
		for(i=0;i<n/2;i++)
    			{   
				c = str[i];
         			str[i] = str[n-1-i];
         			str[n-1-i] = c;
     			}
	}


void main()
	{
  		char str[100];
 
  		printf("\n Enter the string: "); 
  		scanf("%s",str);
  
		reverse_str(str);
  		
		printf("\n Reversed string is: %s \n",str);
}


