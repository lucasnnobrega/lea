#include <stdio.h>

void q20()
{
	int total = 0;
	//char codigoproduto[4];
	int codigoproduto;

	pergunta:
	printf("Digite o código do produto: \n");
	scanf("%s", &codigoproduto);

	printf("%s", codigoproduto);

	switch(codigoproduto)
	{
		case "1001":
                printf("produto 1001");
		break;

		case '1324':
                        printf("produto 1324");
                break;
		case '6548':
                        printf("produto 6548");
                break;
	 	case '0987':
                        printf("produto 0987");
                break;
		case '7623':
                        printf("produto 7623");
                break;

	 	default:
                        printf("Código Errado");
				goto pergunta;
                break;

	}
}

int main ()
{
	int controle = 0;
	for (controle; controle < 5; controle++)
	{
		q20();
	}

}

