/* Read two input each representing the distances between two points in the Euclidean space, store these in structure variables and add the two distance values. */

#include <stdio.h>

struct Point
	{
		int x;
		int y;
	
	} p1,p2,p3;


void main()
	{
  		printf("\n Enter the first point (x1,y1): "); 
  		scanf("%d%d", &p1.x, &p1.y);
  
		printf("\n Enter the second point (x2,y2): "); 
 		scanf("%d%d", &p2.x, &p2.y);
 
	 	p3.x = p1.x + p2.x;
  		p3.y = p1.y + p2.y;
  
		printf("\n The new point after addition: \n");
  		printf("(%d, %d)\n", p3.x, p3.y);
	}
