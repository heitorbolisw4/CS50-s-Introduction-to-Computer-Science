#include <stdio.h>

int soma(int n1, int n2);
int subt(int n1, int n2);
double divs(int n1, int n2);
double mult(int n1, int n2);
void menu(void);

int main(int res)
{
    // variaveis para armazenar inputs
    int option;
    int n1;
    int n2;

    // mostrar menu e obter selecao do usuario
    menu();
    scanf("%d", &option);
    switch (option)
    {
    case 1:
        soma(n1, n2);
        break;
    case 2:
        subt(n1, n2);
        break;
    case 3:
        divs(n1, n2);
        break;
    case 4:
        mult(n1, n2);
        break;    
    default:
        break;
    }

    return 0;
}
void menu(void)
{
    printf("--------------------\n");
    printf("1 - adicao\n");
    printf("2 - subtracao\n");
    printf("3 - multiplicacao\n");
    printf("4 - divisao\n");
    printf("5 - resto divisao\n");
    printf("--------------------\n ");
    printf("Escolha uma opcao: ");
}

int soma(int n1, int n2)
{
    

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);
    

    int res = n1 + n2;
    printf("%d\n", res);
    return res;
}

int subt(int n1, int n2)
{
    

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);
    

    int res = n1 - n2;
    printf("%d\n", res);
    return res;
}

double mult(int n1, int n2)
{
    

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);
    

    float res = n1 * n2;
    printf("%d\n", (int) res);
    return res;
}

double divs(int n1, int n2)
{
    

    printf("n1: ");
    scanf("%d", &n1);

    printf("n2: ");
    scanf("%d", &n2);
    

    double res = n1 / n2;
    printf("%d\n", (int) res);
    return res;
}