/****************************************************************************
Autoria:Viktor Kamei Mota
Disciplina: Programação I
Peça ao usuário que informe três inteiros, sendo um valor inicial, uma razão e a
quantidade n de elementos...
****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

void PA(int *vetor, int n, int a1, int r);
void pesquisaPA(int *vetor, int pesquisa, int n);
//cria as funções

int main()
{
    int a1, r, n, pesquisa, *vetor;
    //cria as variaveis da PA e um ponteiro

    printf("Digite um valor inicial:\n>");
    scanf("%d", &a1);

    printf("Digite uma razao:\n>");
    scanf("%d", &r);

    printf("Digite a quantidade de elementos da PA a serem calculados:\n>");
    scanf("%d", &n);
    //pede e guarda os valores de inicialização da PA

    vetor = (int *)(malloc(n * sizeof(int *)));
    //aloca ao ponteiro a quantidade de elementos (de tamanho int) pedido ao usuario

    PA(vetor, n, a1, r);
    //chama a função que preenche o vetor

    printf("Digite um valor a ser pesquisado:\n>");
    scanf("%d", &pesquisa);
    //pede e guarda um valor a ser pesquisado
    
    printf("PA: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", vetor[i]);
    }//imprime o que tem dentro do vetor
    
    pesquisaPA(vetor, pesquisa, n);
    //chama a função de pesquisa

    free(vetor);
    //libera a memoria dada ao vetor
    return 0;
}

void PA(int *vetor, int n, int a1, int r)
{
    for (int i = 0; i < n; i++)
    {
        vetor[i] = a1 + i * r;
    }
    //cria um loop que dara ao vetor o valor da PA
}

void pesquisaPA(int *vetor, int pesquisa, int n)
{
    int controle = 0;
    for (int i = 0; i < n; i++)
    //percorre o vetor
    {
        if (pesquisa == vetor[i])
        {
            printf("\nO valor %d se encontra na PA na posicao %d", pesquisa, i+1);
            controle = 1;
        }        
    }//se a palavra e achada e impresso na tela e e dado o valor 1 ao controle

    if (controle != 1)
    {
        printf("\nO valor %d nao se encontra na PA", pesquisa);
    }//se a palavra nao e achada o controle nao e 1 e e impresso na tela
}
