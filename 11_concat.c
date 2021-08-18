/* Read two strings (each one ending with a $ symbol), store them in arrays and concatenate them without using library functions */

#include<stdio.h>

void main()
	{
		char str1[100], str2[25];
		int i,j;

		printf("\n Enter First String: ");
		gets(str1);
		printf("\n Enter Second String: ");
		gets(str2);

		while(str1[i]!='\0')
  			{
   				 i++;
  			}
 		

  		while(str2[j]!='\0')
  			{
   				 str1[i]=str2[j];
    				 j++;
    				 i++;
  			}
		

		str1[i] = '\0'; //to termintate string
		printf("\n The concatenated string is: %s \n ", str1);
		
	}
