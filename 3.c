#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tabla[2][3]={{8,5,2},{4,18,3}};
	int i,a,may,men,sum = 0 ;
	printf("Matriz no modificada:\n");
	for(i=0;i<2;i++)
	{
		for(a=0;a<3;a++)
		{
			printf("%d ",tabla[i][a]);
		}
		printf("\n");
	}
	printf("\nMatriz Modificada:\n");
	for(i=0;i<=2;i++)
	{
		tabla[0][i]=tabla[0][i] * 4;
	}
	for(a=0;a<2;a++)
	{
		tabla[a][2]=tabla[a][2] * 3;
	}
	for(i=0;i<=1;i++)
	{
		for(a=0;a<3;a++)
		{
			printf("%d ",tabla[i][a]);
		}
		printf("\n");
	}
	may = tabla [0][0];
	
	for(i=0;i<=1;i++)
	{
		
		for(a=0;a<3;a++)
			
		{
			if(tabla[i][a] > may)
				
			{
				may=tabla[i][a];
			}
		}
		printf("\n");
	}
	printf("El valor mayor de los elementos de la matriz modificada es: %d",may);
	men = may;
	for(i=0;i<=1;i++)
	{
		for(a=0;a<3;a++)
		{
			if(tabla[i][a]<men)
				
				men=tabla[i][a];
		}
		printf("\n");
	}
	printf("El valor menor de los elementos de la matriz modificada es: %d\n\n",men);
	for(i=0;i<=1;i++)
	{
		for(a=0;a<3;a++)
		{
			sum=sum+tabla[i][a];
		}
	}
	printf("La suma de los elementos de la matriz es: %d\n",sum);
	return 0;
}

