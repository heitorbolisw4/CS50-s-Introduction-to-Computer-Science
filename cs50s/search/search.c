#include <stdio.h>

int main(void)
{
    int array[] = {50, 20, 33, 42, 86, 77, 100};
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    for(int i = 0; i < 7; i++)
    {
        if(array[i] == n)
        {
            printf("o numero esta na lista\n");
            return 0;
        }
    }
    printf("o numero nao esta na lista\n");
    return 1;

}