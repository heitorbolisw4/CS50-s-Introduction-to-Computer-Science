#include <stdio.h>
#include <string.h>

#define MAX_SIZE 50

typedef struct
{
    /* data */

    char nome[MAX_SIZE];
    float preco;
    int quantidade;
} product;

// criar uma funcao para preencher
int main (void)
{
    product estoque[4];
    strcpy(estoque[0].nome, "mouse");
    
    estoque[0].preco = 84.50;
    estoque[0].quantidade = 1;

    strcpy(estoque[1].nome, "computador");
    estoque[1].preco = 4500;
    estoque[1].quantidade = 1;

    strcpy(estoque[2].nome, "teclado");
    estoque[2].preco = 500;
    estoque[2].quantidade = 1;



    printf("digite o nome do produto: ");
    if (fgets(estoque[3].nome, MAX_SIZE, stdin) == NULL)
    {
        printf("digite o nome correto");
        return 1;
    }

    estoque[3].nome[strcspn(estoque[3].nome, "\n")] = '\0';

    for (int i = 0; i < 3; i++)
    {
        if (strcmp(estoque[i].nome, estoque[3].nome) == 0)
        {
            printf("Produto: %s\n", estoque[i].nome);
            return 0;
        }

    }
    printf("produto nao encontrado\n");
    return 1;

}
