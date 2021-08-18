/* Read a string (word), store it in an array and check whether it is a palindrome word or not. */

#include<stdio.h>
#include<string.h>

void main()
	{
		char str[17];
		int flag = 0;

		printf("\n Enter the string (word): ");
		scanf("%s", str);

		int i = 0;
		int j = strlen(str)-1;

		while(j>i)
			{
				if(str[i++] != str[j--])
					{
						flag = 1;
						break;
					}
			}
		
		if(flag == 1 )
			printf("\n Not a Palindrome...\n");
		else
			printf("\n PALINDROME! \n");
	}
					
					
