#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tabla[2][3];
		
		int i,j;
		for(int i=0;i<2;i++)
		{
			for(int j=0;j<3;j++){
				printf ("Ingrese el valor de la columna y fila:\n", i, j);
				scanf ("%d",&tabla[i][j],&tabla[i][j]);
			}
		}
		printf("Matriz sin multiplicar:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",tabla[i][j]);
			}
			printf("\n");
		}
		
		printf("\nPrimera fila multiplicada por 4 :\n");
		
		for(j=0;j<3;j++)
		{
			tabla[0][j] = tabla[0][j] * 4;
		}
		for(i=0;i<2;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ",tabla[i][j]);
			}
			printf("\n");
		}
		
		printf("\nTercera columna multiplicada por 3:\n");
		for(i=0;i<2;i++)
		{
			tabla[i][2] = tabla[i][2] * 3;
			for(j=0;j<3;j++)
			{
				printf("%d ",tabla[i][j]);
			}
			printf("\n") ;
		}
		
		return 0;
}
