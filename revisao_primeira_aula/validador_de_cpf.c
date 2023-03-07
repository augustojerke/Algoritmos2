#include <stdio.h>
#include <stdlib.h>

int main ()
{

    char cpf[12], j = 0;
    int mult = 0, num = 0;

    gets(cpf);
    
    
	
	for(int i = 10; i>=2; i--)
    {
        mult += atoi(&cpf[j])*i;
        j++;
    }

    printf("%d", atoi(&cpf[0]) + 10);


    return 0;
}