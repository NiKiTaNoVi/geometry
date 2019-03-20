#include <stdio.h>
#include <stdlib.h>

void Circle(int x, int y, int r)
{
	printf("Circle (%d, %d, %d)\n",x, y, r);
}

int main()
{
	int n, i, *A_x, *A_y, *A_r;
	printf("Enter the number of circles ");
	scanf("%d",&n);
	A_x = (int*)malloc(n * sizeof(int));
	A_y = (int*)malloc(n * sizeof(int));
	A_r = (int*)malloc(n * sizeof(int));

for (i = 0; i < n; i++){
	printf("Enter x, y, and the radius of the circle %d ", i + 1);
	scanf("%d%d%d", &A_x[i], &A_y[i], &A_r[i]);
	
}

for (i = 0; i < n; i++){
	printf("%d ", i + 1);
	Circle(A_x[i], A_y[i], A_r[i]);
}


	return 0;
}


