#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tabla[2][3]={{8,5,2},{4,18,3}};
	int i,j,may,men,sum = 0 ;
	printf("Matriz no modificada:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",tabla[i][j]);
		}
		printf("\n");
	}
	printf("\nMatriz Modificada:\n");
	for(i=0;i<=2;i++)
	{
		tabla[0][i]=tabla[0][i] * 4;
	}
	for(j=0;j<2;j++)
	{
		tabla[j][2]=tabla[j][2] * 3;
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",tabla[i][j]);
		}
		printf("\n");
	}
	may = tabla [0][0];
	
	for(i=0;i<=1;i++)
	{
		
		for(j=0;j<3;j++)
			
		{
			if(tabla[i][j] > may)
				
			{
				may=tabla[i][j];
			}
		}
		printf("\n");
	}
	printf("El valor mayor de los elementos de la matriz modificada es: %d",may);
	men = may;
	for(i=0;i<=1;i++)
	{
		for(j=0;j<3;j++)
		{
			if(tabla[i][j]<men)
				
				men=tabla[i][j];
		}
		printf("\n");
	}
	printf("El valor menor de los elementos de la matriz modificada es: %d\n\n",men);
	for(i=0;i<=1;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+tabla[i][j];
		}
	}
	printf("La suma de los elementos de la matriz es: %d\n",sum);
	return 0;
}

