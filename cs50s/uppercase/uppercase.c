#include <stdio.h>
#include <string.h>

#define MAX_SIZE 7

int main(void)
{
    char name[MAX_SIZE];
    
    printf("Digite seu nome: ");

    if(fgets(name, MAX_SIZE, stdin) == NULL)
    {
        printf("Erro na leitura...");
        return 1;
    }

    size_t len = strlen(name);

    if(len > 0 && name[len - 1] == '\n')
    {
        name[len - 1] = '\0';
        len--;
    }

    printf("Seu nome %s \n", name);
    printf("tamanho do nome: %zu \n", len);

}