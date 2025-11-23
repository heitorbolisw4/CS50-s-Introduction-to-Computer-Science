#include <stdio.h>

int main(void){
    char name[50];

    printf("Digite seu nome: ");
    scanf("%49s", name);
    printf("Ola, %s!\n", name);

    return 0;
}