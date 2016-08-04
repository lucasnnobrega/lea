#include <stdio.h>

void teste()
{
    int contrl = 0;

    printf("Funciona teste : \n");
    scanf(" %i", &contrl);
    if (contrl < 5)
    {
        void tested()
        {
        printf("funcao nao criada tested \n");
        }

        tested();
    }
}


int main()
{
    int controle = 0;

    for (controle; controle <5; controle ++)
    {
        teste();
    }


    return 0;
}
