/* Read a string (ending with a $ symbol), store it in an array and count the number of vowels consonants and spaces in it. */

#include<stdio.h>
#include<string.h>

void main()
	{
		int v_count=0, c_count=0, sp_count=0;
		char str[50];

		printf("\n Enter a string: ");
		gets(str);

		for(int i=0; i<strlen(str); i++)
			{
				if(str[i] == ' ')
					sp_count++;
				
				else if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U')
					v_count++;
				
				else if ((str[i] > 'a' && str[i] < 'z') || (str[i] > 'A' && str[i] < 'Z'))
					c_count++;
			}
		
		printf("\n Counts are as follows:- \n Vowels: %d \n Consonants: %d \n Whitespaces: %d \n", v_count, c_count, sp_count);

	}
		
		
