/****************************************************************************
Autoria:Viktor Kamei Mota
Disciplina: Programação I
Um programa deve receber como parâmetro de chamada um valor n de palavras a serem
lidas...
****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(argc < 2)
    {
        printf("Esta faltando parametros\n");
        exit (EXIT_FAILURE);
    }//verifica se foi dado o argumento ao chamar o programa
    
    int n_palavras;
    n_palavras = atoi(argv[1]);
    //cria a variavel que vai receber o valor dado ao parametro convertido em inteiro

    char **palavra;
    //cria um ponteiro de ponteiro para armazenar as palavras digitadas pelo usuario
    palavra = (char **)calloc(n_palavras, sizeof(char *));
    //aloca a quantidade de palavras que o usuario pedir em uma string vazia
    for (int i = 0; i < n_palavras; i++)
    {
        palavra[i] = (char*)calloc(50, sizeof(char));
    }//este loop vai percorrer todos os indices da string alocando 50 espaços para cada indice

    printf("Digite %d palavras:\n", n_palavras);
    for (int i = 0; i < n_palavras; i++)
    {
        scanf("%s", palavra[i]);
    }//guarda todas as palavras digitadas pelo usuario em um indice da string

    printf("\nInverso:");

    for (int i = n_palavras - 1; i >= 0; i--)//loop que roda as palavras da ultima ate a primeira
    {
        printf("\n");
        for (int i2 = strlen(palavra[i]); i2 >= 0; i2--)
        //loop que pega a quantidade de letras que tem em cada string e vai diminuindo 1 ate chegar em 0
        {   
            printf("%c", palavra[i][i2]);
            //imprime a ultima palavra ao contrario
        }
    }

    for(int i = 0; i < n_palavras; i++)
    {
        free(palavra[i]);
    }
    free(palavra);
    //libera todos os espaços alocados
    return 0;
}