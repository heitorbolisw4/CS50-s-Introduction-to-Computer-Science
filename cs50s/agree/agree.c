#include <stdio.h>

int main(void)
{
    char option;
    printf("digite y para prosseguir e n para encerrar: ");

    scanf(" %c", &option);

    if(option == 'y' || option == 'Y')
    {
        printf("prosseguindo...\n");
    }
    else if (option == 'n' || option == 'N')
    {
        printf("encerrando...\n");
    }
    else
    {
        printf("voce deve digitar y ou n\n");
    }
    return 0;
}