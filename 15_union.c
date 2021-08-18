/* Declare a union containing 5 string variables (Name, House Name, City Name, State and Pincode) each with a length of C_SIZE (user defined constant). Then, read and display the address of aperson using a variable of the union */

#include <stdio.h>
#include <string.h>

#define C_SIZE 50

union Address
	{
        	char name[C_SIZE];
            	char hname[C_SIZE];
           	char cityname[C_SIZE];
        	char state[C_SIZE];
        	char pin[C_SIZE];
	};

void main()
	{
    		union Address record1;
  
    		printf("Enter name:");
    		scanf("%s",record1.name);
    
    		printf("Enter house name:");
    		scanf("%s",record1.hname);
    
   		 printf("Enter city name:");
    		scanf("%s",record1.cityname);
    
    		printf("Enter state name:");
    		scanf("%s",record1.state);
    
    		printf("Enter pin:");
    		scanf("%s",record1.pin);

    		printf("Union record1 values ....\n");
   		printf(" Name          : %s \n", record1.name);
    		printf(" House Name    : %s \n", record1.hname);
    		printf(" City Name     : %s \n", record1.cityname);
    		printf(" State name    : %s \n", record1.state);
    		printf(" Pin           : %s \n", record1.pin);
 	}
