#include<stdio.h>
#include<stdlib.h>

int main()
{
	int tabla[3][12],suma1=0,suma2=0,i=0,j=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<12;j++)
		{
			printf("El conjunto de la linea %d y el grupo %d es: \n",i+1,j+1);
			scanf("%d",&tabla[i][j]);
		}
	}
	system("cls");
	
	for(int i=0;i<3;i++)
	{
		suma1=0;
		for(int j=0;j<12;j++)
		{
			printf("El conjunto de la linea %d y el grupo %d es de:%d \n",i+1,j+1,tabla[i][j]);
			suma1=suma1+tabla[i][j];
		}
		printf("\n");
		suma2 = suma2 + suma1;
		printf("El conjunto de la linea %d es de: %d\n",i+1,suma1);
		
		
	}
	printf("El conjunto total es de: %d",suma2);
	return 0;
}
