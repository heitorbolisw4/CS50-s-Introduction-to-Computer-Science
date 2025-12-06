#include <stdio.h>

int string_length(char s[100]);


int main(void)
{
    char name[100];

    printf("Digite seu nome: ");

    scanf("%99s", name);
    printf("Ola %s!\n", name);

    int length = string_length(name);
    printf("O seu nome tem %i letras\n", length);
}

int string_length(char s[100])
{

    int n = 0;

    while (s[n] != '\0')
    {
        n++;
    }
    return n;
}