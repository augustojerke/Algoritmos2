#include <stdio.h>
#include <stdlib.h>

int main ()
{
    char cpf[12];
    int cpfInt[11], soma = 0;
    int dig1 = 0, dig2 = 0;

    gets(cpf);

   //transformando char em int 
    for(int i = 0; i<11; i++)
    {
        cpfInt[i] = cpf[i] - '0';
    }

    for(int i = 10, j = 0; i>=2; i--, j++)
    {
        soma += i*cpfInt[j];
    }




    return 0;
}