/*
Programação I
Aluno: VIKTOR KAMEI MOTA
Proposito: Leia n números inteiros positivos do teclado até que seja lido número zero. Para cada vez
que um novo número for lido, imprima o maior, o menor e a média dos números lidos até
então.
*/

#include <stdio.h>

int main()
{
    float media, somador = 0;
    //cria duas variaveis float para ter casas decimais a media e o somador que e dado o valor de 0
    int maior = 0, menor, contador = 0, n1;
    //cria 4 variaveis inteiras
    printf("Digite numeros inteiros positivos ou zero para encerrar:\n");
    scanf("%d", &n1);
    //pede e guarda o valor de um numero "n1" que sera o numero a ser comparado em loop
    menor = n1;
    //da o valor de menor o mesmo de n1 para que se possa comparalo depois

    while(1)
    //começa o loop while e nao e dado nenhuma condição entao ele e rodado ate que seja dado o comando break
    {
        if(n1 > maior)
        {
            maior = n1;
        }
        //se o numero digitado for maior que o anterior entao "maior" e dado o valor desse numero
        if(n1 < menor)
        {
             menor = n1;
        }
        //se o numero digitado for menor que o anterior entao "menor" e dado o valor desse número
        if(n1 == 0)
        {
            break;
        }
        //se e dado o valor 0 o loop acaba e o codigo para de rodar

        somador = somador + n1;
        //sempre soma o valor anterior com o novo valor para se calcular a soma da media
        contador = contador + 1;
        //soma sempre 1 ao valor contador para que se possa calcular a divisao da media
        
        media = somador / contador;
        //a media e calculada com a soma de todos os numeros digitados ate então e
        //dividido pela quantidade de numeros digitados pelo usuario

    printf("o maior e %d, o menor e %d, e a media %.2f\n", maior, menor, media);
    //imprime os valores maior que onde e guardado o maior numero digitado
    //menor que e guardado apenas o menor numero digitado
    //e a media que e calculada por todos os numeros ja digitados

    scanf("%d", &n1);
    //guarda mais uma vez o numero digitado em n1 e recomeça o loop
    }

    return 0;
}
