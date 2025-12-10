#include <stdio.h>
#include <string.h>

// define a estrutura
typedef struct
{
    char nome[50];
    char telefone[20];

} Contato;

// function para iterar sobre a lista de contatos
char* buscarTelefone(Contato lista[], int tamanho, const char *nomeBuscado)
{
    // itera pelo array levando considerando o tamanho
    for (int i = 0; i < tamanho; i++)
    {
        // se a condicao for satisfeita, retorna o telefone localizado
        if(strcmp(lista[i].nome, nomeBuscado) == 0)
        {
            return lista[i].telefone;
        }
    }
    return NULL;
}



int main(void)
{
    // lista de contatos pre-definidos
    Contato lista[] = {
        {"Heitor", "3499313-0557"},
        {"Mae", "34999001010"},
        {"Namorada", "3499777-7347"},
        {"Pai", "229337-7347"}

    };

    int tamanho = sizeof(lista) / sizeof(lista[0]);

    // define o tamanho do input do usuario
    char busca[50];

    // faz leitura do input e subistitui o \n da string por \0 para que nao haja nenhum caractere ao final da string
    printf("Digite o nome: ");
    fgets(busca, sizeof(busca), stdin);
    busca[strcspn(busca, "\n")] = '\0';


    // passa os dados para a function que ira iterar sobre o array
    char *telefone = buscarTelefone(lista, tamanho, busca);

    // condicao para verificar e informar se o item no array foi encontrado ou nao
    if(telefone != NULL)
    {
        // se for encontrado, informar numero encontrado
        printf("Telefone encontrado: %s\n", telefone);

    }else{
        // se nao, informar que nao foi encontrado
        printf("Contato nao localizado. \n");
    }
    return 0;
}
