/* 23 The X and Y coordinates of 10 different points are entered
through the keyboard. Write a program to find the distance of
last point from the first point (sum of distance between
consecutive points). */

#include <stdio.h>
#include <math.h>

int main(void)
{
	int array[5][2], i, j, x, y, square_x, square_y;
	float ans = 0;

	for(i = 0;i < 5;i++)
	{
		printf("enter co-ordinate:"); 
		for(j = 0;j < 2;j++)
		{
			scanf("%d", &array[i][j]);
		}
	}

	for(i = 1;i < 5;i++)
	{
		x = (array[i][0] - array[i - 1][0]);
		y = (array[i][1] - array[i - 1][1]); 
		square_x = x * x;
		square_y = y * y;
		printf("square of x is %d\n", square_x);
		ans = ans + sqrt(square_x + square_y);
		printf("distance is %f\n", ans);
	}

	
}
