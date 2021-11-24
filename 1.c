#include <stdio.h>
#include <stdlib.h>
int main()
{
	int tabla [2][3] = {{6,4,5}, {2,6,4}};
	
	int i,a;
	
	for(i=0;i<2;i++)
		
	{
		
	
		for(a=0;a<3;a++)
		{
			printf("%d",tabla[i][a]);
		}
		
		printf("\n");
	}
	return 0;
}
