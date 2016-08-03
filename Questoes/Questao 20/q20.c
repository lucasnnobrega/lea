#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

void q20(int* controle)
{
    static float total = 0;
	char codigoproduto[4];
	float preco;

	pergunta:
	printf("Digite o código do produto: \n");
	scanf("%s", &codigoproduto);

	printf("%s \n", codigoproduto);

	if (strcmp(codigoproduto,"1001") == 0)
	{
		printf("Produto numero 1001 \n");
		preco = 5.32;
		qant_x_preco(preco, &total);

	}
	else if(strcmp(codigoproduto,"1324") == 0)
    {
        printf("Produto 1324 \n");
        preco = 5.32;
		qant_x_preco(preco, &total);

    }
    else if(strcmp(codigoproduto,"6548") == 0)
    {
        printf("Produto 6548 \n");
        preco = 5.32;
		qant_x_preco(preco, &total);

    }
    else if(strcmp(codigoproduto,"0987") == 0)
    {
        printf("Produto 0987 \n");
        preco = 5.32;
		qant_x_preco(preco, &total);


    }
    else if(strcmp(codigoproduto,"7623") == 0)
    {
        printf("Produto 7623 \n");
        preco = 5.32;
		qant_x_preco(preco, &total);

    }
    else if(strcmp(codigoproduto, "1234") == 0)
    {
        printf("O valor total e: \n");
        printf("%3.2f", total)
        *controle = 0;
    }
    else
    {
        printf("Código Errado");
        goto pergunta;
    }

}

float qant_x_preco(float preco, int* total)
{
    int quantiddade;

    printf("Diga a quantidade de produtos: \n");
    scanf("%i", quantidade);
    *total = *total + (quantidade * preco);

}


int main ()
{

	int controle = 0;
    int var = 1;

	do{
        q20(&var);
	}while(var)

}

