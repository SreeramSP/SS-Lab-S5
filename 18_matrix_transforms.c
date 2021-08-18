/* Write a menu driven program for performing matrix addition, multiplication and finding the transpose. Use functions to 
	(i) read a matrix, 
	(ii) find the sum of two matrices, 
	(iii) find the productof two matrices, 
	(iv) find the transpose of a matrix and 
	(v) display a matrix. */


#include <stdio.h>
#include <stdlib.h>


void readmatrix(int a[][100], int m, int n)
	{
 		int i, j;
 		printf("\n Enter the elements row by row: ");
 		for(i=0;i<m;i++)
   			for(j=0;j<n;j++)
    				scanf("%d", &a[i][j]);
	}


void displaymatrix(int a[][100], int m, int n)
	{
 		int i, j;
 		for(i=0;i<m;i++)
 			{
  				for(j=0;j<n;j++)
    					printf("%5d",a[i][j]);
 				 printf("\n");
  			}
	}


void addmatrix(int a[][100], int b[][100], int m, int n)
	{
 		int i, j, c[100][100];
		 for(i=0;i<m;i++)
   			for(j=0;j<n;j++)
    				c[i][j] = a[i][j] + b[i][j];
 		printf("Sum of matrix...\n");
 		displaymatrix(c,m,n);
	}


void transpose(int a[][100], int m, int n)
	{
 		int i, j, c[100][100];
 		for(i=0;i<m;i++)
   			for(j=0;j<n;j++)
    				c[j][i]=a[i][j];

 		displaymatrix(c,n,m);
	}


void multmatrix(int a[][100], int b[][100], int m1, int n1, int n2)
	{
 		int c[100][100], i, j, k;
		// Multiply the two
    		for (i = 0; i < m1; i++) 
        		{	
				for (j = 0; j < n2; j++) 
           				{
					 	c[i][j] = 0;
            					for (k = 0; k < n1; k++)
                				c[i][j] += a[i][k] * b[k][j];
       				 	}
    			}

	 	printf("Product of matrix...\n");
 		displaymatrix(c,m1,n2);
	}



void main()
	{ 
		int a[100][100], b[100][100], m1, n1, m2, n2, op;
  
  		printf("\n Enter the size of the matrix A (row&column): ");
  		scanf("%d%d", &m1, &n1);
  
		printf("\n Enter Matrix A: ");
  		readmatrix(a, m1, n1);
  
		printf("\n Enter the size of the matrix B (row&column): ");
  		scanf("%d%d", &m2, &n2);
  		
		printf("\n Enter Matrix B: ");
  		readmatrix(b, m2, n2);
  
  		printf("\n Matrix A...\n");  
 		displaymatrix(a, m1, n1);
  
		printf("\n Matrix B...\n");  
  		displaymatrix(b, m2, n2);
  
		
		while(1)
  			{
   				printf("\n**MENU**\n");
   				printf("\n 1. Add \n 2. Multiply \n 3. Transpose \n 4. Exit \n");
   				printf("\n Enter choice: ");
   				scanf("%d",&op);
   
				switch(op)
   					{
    						case 1: if(m1==m2 && n1==n2)
                   						addmatrix( a, b, m1, n1);
                					else
                   						printf("\n Incompatable matrix...cannot add!");
                 						break;
    
						case 2: if(n1==m2)
                   						multmatrix( a, b, m1, n1, n2);
               						else
                   						printf("\n Incompatable matrix...cannot mutliply!");
                						break;
    
						case 3: printf("\n Transpose of A...\n");
                					transpose( a, m1, n1);
               						 
							printf("\n Transpose of B...\n");
                					transpose( b, m2, n2);
                					
							break;
    
						case 4: exit(0);
	
						default: printf("\n Invalid Choice! \n");
   					} 
   			}
	}
