/*
Programação I
Aluno: VIKTOR KAMEI MOTA
Descrição: Peça ao usuário que informe dois inteiros, sendo um valor inicial e uma razão. 
Preencha um vetor de 10 posições começando pelo valor inicial e incrementando-o com a razão
(progressão aritmética - PA). Depois peça um número para que seja verificado se ele
pertence à PA e informe o resultado na tela.
*/

#include <stdio.h>

int main()
{
    int vet[10];
    //cria um vetor com 10 posições
    int pa, a1, r, an, n;
    //cria os termos de uma pa
    int i;
    //variavel para ser usada no for loop
    int pesquisa;
    //elemento a ser proucurado
    int controle;
    //variavel para ser usada para saber se um valor e verdadeiro ou falso
    
    printf("Digite um valor inicial e uma razao:\n");
    scanf("%d %d", &a1, &r);
    //guarda o valor inicial e a razao dentro das variaveis a1 e r

    n = 10;
    //dado que a pa sera sempre de 10 termos o valor de n e sempre 10
    an = a1+(n-1)*r;
    //assim podemos descobrir o valor do ultimo termo da pa que servira para setar uma condição no for loop
    i = 0;
    //i e dado o valor de 0 para que ele possa ser somado depois

    for (pa = a1; pa <= an; pa= pa + r)
    //nesse for loop temos que a pa começa no valor inicial dado pelo usuario
    //e ela seguira adicionando a razao a esse valor ate que seja atinjido o valor maximo, que e o maior termo dessa pa quando ela tem so 10 termos
    {
        vet[i] = pa;
        //guarda sempre o valor da PA em cada loop na posição i lembrando que i começa com 0
        i++;
        //depois de guardado o valor e somado 1 ao i em cada loop
    }

    printf("\nDigite um valor a ser pesquisado:\n");
    scanf("%d", &pesquisa);
    //pede o valor a ser pesquisado e o guarda na variavel pesquisa
    printf("\nPA:");
    //imprime o texto acima apenas para formatação do codigo

    for (i = 0; i < 10; i++)
    //cria um loop que começa no 0 e vai ate o 9
    {
        printf("%d ",vet[i]);
        //imprime para todo o valor de i o elemento
        //entao ele imprime vet[0] depois vet[1]... ate o vet[9] ou seja todos as posiçõe sao impressas
    }

    for (i = 0; i < 10; i++)
    //cria o mesmo loop em q i vai de 0 ate o 9
    {
        if (pesquisa == vet[i])
        //se o valor da pesquisa estiver dentro do vetor em qualquer posição de i que varia de 0 a 9
        //o bloco abaixo e executado
        {
            printf("\n\nO valor %d se encontra na PA", pesquisa);
            //se o valor e encontrado ele e impresso
            controle = 1;
            //a variavel de controle sempre sera 1 se a condição for verdadeira
        }        
    }

    if (controle != 1)
    //se a variavel controle não for 1 significa que a condição não foi cumprida e entao o valor pesquisado 
    //não se encontra na PA
    {
        printf("\n\nO valor %d nao se encontra na PA", pesquisa);
        //entao e impresso que o valor não foi encontrado
    }
    
    return 0;
}