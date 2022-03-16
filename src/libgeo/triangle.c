#include "triangle.h"
#include <math.h>
#include <stdio.h>

void triangle()
{
    int a, b, c, perimetr,x,p;
    float s;
    printf("Vedite storoni:");
    scanf("%d %d %d", &a, &b, &c);
    if ((a > 0) && (b > 0) && (c > 0)) 
	{
        perimetr = (a + b + c);
        p=(a+b+c)/2;
	x=p*((p-a)*(p-b)*(p-c));
	s=sqrt((float)x);
        printf("\nperimetr = %d s = %.2f\n", perimetr, s);
	} 
    else 
	{
        printf("NO\n");
	}
}
