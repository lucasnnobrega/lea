#include <stdio.h>
#include <string.h>
//#include <stdlib.h>

float qant_x_preco(float preco, float* ptr) //pq a função mudou de void para float; ponteiro float pois a variavel é float
{
    int quantidade;

    printf("Diga a quantidade de produtos: \n");
    scanf("%i", &quantidade);
    *ptr = *ptr + (quantidade * preco);
    printf("Total: %3.2f \n",*ptr);
}

void q20(int* controle)
{
    static float total = 0;
	char codigoproduto[4];
	float preco;
    pergunta:
	printf("Digite o código do produto: \n");
	scanf("%s", &codigoproduto);

	if (strcmp(codigoproduto,"1001") == 0)
	{
		printf("Produto numero 1001 \n");
		preco = 5.32;
		qant_x_preco(preco, &total);

	}
	else if(strcmp(codigoproduto,"1324") == 0)
    {
        printf("Produto 1324 \n");
        preco = 6.45;
		qant_x_preco(preco, &total);

    }
    else if(strcmp(codigoproduto,"6548") == 0)
    {
        printf("Produto 6548 \n");
        preco = 2.37;
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
        preco = 6.45;
		qant_x_preco(preco, &total);

    }
    else if(strcmp(codigoproduto, "1234") == 0)
    {
        printf("O valor total e: \n");
        printf("%3.2f", total);
        int* controlePTR = controle;
        *controlePTR = 0;
    }
    else
    {
        printf("Código Errado. \n");
        goto pergunta;
    }

}



int main ()
{

	int controle = 0;
    int var = 1;

	do{
        q20(&var);
	}while(var);

    return 0;
}
