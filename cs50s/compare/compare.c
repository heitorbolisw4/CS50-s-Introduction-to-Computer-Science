#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("digite o valor de x: ");
    scanf("%d", &x);

    printf("digite o valor de y: ");
    scanf("%d", &y);

    if(x > y)
    {
        printf("x é maior que y\n");
    }
    else if (x < y)
    {
        printf("x é menor que y\n");
    }
    else
    {
        printf("x e y sao iguais\n");
    }


    return 0;
}