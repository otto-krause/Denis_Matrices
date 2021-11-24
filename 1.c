#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tabla [2][3], i, j;
	for (int i=0;i<2;i++)
	{
		for (int j=0;j<3;j++)
		{
			printf ("Ingrese el valor de la fila y la columna: \n", i, j);
			scanf ("%d", &tabla[i][j]);
		}
	}
	for(i=0;i<2;i++)
		
	{
		
		
		for(j=0;j<3;j++)
		{
			printf("%d",tabla[i][j]);
		}
		
		printf("\n");
	}
	return 0;
}
