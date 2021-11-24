#include<stdio.h>
#include<stdlib.h>
int main()
{
	int tabla[20][6],suma=0,promedio=0;
	
	for(int i=0;i<20;i++)
	{
		for(int a=0;a<6;a++)
		{
			printf("Ingresar el promedio de habitantes del departamento %d del piso %d: ",a+1,i+1);
			scanf("%d",&tabla[i][a]);
		}
	}
	system("cls");
	for(int i=0;i<20;i++)
	{
		for(int a=0;a<6;a++)
		{
			suma=suma+tabla[i][a];
			promedio=suma/6;
		}
		printf("Hay un promedio de %d personas en el piso %d",i+1,promedio);
		
		printf("\n");
	}
	printf("En total hay unos %d de personas",suma);
	return 0;
}
