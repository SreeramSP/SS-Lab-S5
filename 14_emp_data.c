/* Using structure, read and print data of n employees (Name, Employee Id and Salary) */

#include<stdio.h>

struct Employee
	{
		char id[10];
		char name[25];
		float salary;
	};

void main()
	{
		struct Employee e[10];
		int n;
	
		printf("\n Enter value for n: \n");
		scanf("%d", &n);

		for(int i=0; i<n; i++)
			{
				printf("\n Enter details of Employee %d :-", i+1);
				printf("\n Enter Employee ID, Name and Salary (in Rs.): ");
				scanf("%s%s%f", e[i].id, e[i].name, &e[i].salary);
			}
	
		for(int i=0; i<n; i++)
			{
				printf("\n Showing details of Employee %d... ", i+1);
				printf("\n Employee iD: %s \n Name: %s \n Salary: %.2f \n", e[i].id, e[i].name, e[i].salary);
			}
}
		
