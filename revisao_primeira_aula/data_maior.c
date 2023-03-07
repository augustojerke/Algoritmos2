#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char dataChar1[9], dataChar2[9];
    int ano1 = 0, ano2 = 0, mes1 = 0, mes2 = 0, dia1 = 0, dia2 = 0;
    
    gets(dataChar1);
    fflush(stdin);
    gets(dataChar2);

    sscanf(dataChar1 + 4, "%4d", &ano1);
    sscanf(dataChar2 + 4, "%4d", &ano2);
    sscanf(dataChar1 + 2, "%2d", &mes1);
    sscanf(dataChar2 + 2, "%2d", &mes2);
    sscanf(dataChar1, "%2d", &dia1);
    sscanf(dataChar2, "%2d", &dia2);
    
    if(ano1 > ano2)
    {
    	printf("Data 1 maior");
	}
	else if(ano2 > ano1)
	{
		printf("Data 2 maior");
	}
	else
	{
		if(mes1>mes2)
		{
			printf("Data 1 maior");
		}
		else if(mes2>mes1){
			printf("Data 2 maior");
		}
		else
		{
			if(dia1>dia2)
			{
				printf("Data 1 maior");
			}
			else if(dia2>dia1)
			{
				printf("Data 2 maior");
			}
			else
			{
				printf("Datas iguais");
			}
		}
	}  
    
    return 0;
}