#include<stdio.h>
#include<stdlib.h>
int main()
{
	int tabla[20][6],suma=0,promedio=0;
	
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<6;j++)
		{
			printf("Ingresar el promedio de habitantes del departamento %d del piso %d\n: ",j+1,i+1);
			scanf("%d",&tabla[i][j]);
		}
	}
	system("cls");
	for(int i=0;i<20;i++)
	{
		for(int j=0;j<6;j++)
		{
			suma=suma+tabla[i][j];
			promedio=suma/6;
		}
		printf("\nHay un promedio de %d personas en el piso %d\n",i+1,promedio);
		
		printf("\n");
	}
	printf("En total hay unos %d de personas",suma);
	return 0;
}
