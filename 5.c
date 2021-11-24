#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num[100][3],i,j,b;
	for(int i=0;i<100;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("Ingrese la nota del %d trimestre del alumno %d: ",j+1,i+1);
			scanf("%d",&num[i][j]);
		}
	}
	system("cls");
	do{
		printf("Quiere modificar alguna nota?\n");
		
		printf("1=Si  | 2=No  \n");
		
		scanf("%d",&b);
		
		if(b!=2)
		{
			printf("Ingresar el alumno:");
			
			scanf("%d",&i);
			
			printf("Ingresar el trimestre:");
			
			scanf("%d",&j);
			
			printf("Ingresar la nota:");
			
			scanf("%d",&num[i][j]);
		}
	}
	while(b!=2);
}
