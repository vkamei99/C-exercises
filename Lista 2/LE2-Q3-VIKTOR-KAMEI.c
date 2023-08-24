/*
Programação I
Aluno: VIKTOR KAMEI MOTA
Proposito: Leia uma string do teclado (tamanho máximo 50). Imprima cada caracter de trás pra frente.
*/

#include <stdio.h>

int main()
{
    char strg[50];
    //cria uma string com 50 elementos
    int i;
    //cria a variavel para o for loop
    int contador = 0;
    //cria a variavel contador e é dado o valor de 0 a ele
    //o contador vai ser usado para saber quantas vezes um loop rodou

    printf("Digite uma string:\n");
    scanf("%s", &strg);
    //pede e guarda uma string de x<50 caracteres

    for(i = 0; i < 50; i++)
    //cria um loop que vai de 0 ate 49 que é o ultimo elemento possivel da string
    {
        contador = contador + 1;
        //toda vez que acontece o loop e somado 1 ao contador
        if(strg[i] == '\0')
        //se a string atinge o valor \0 o loop e parado
        {
            break;
        }
        //como a propria linguagem c salva \0 no final de cada string escrita
        //e possivel saber quantos caracteres foi digitado pelo usuario usando um for loop
        //com um contador e uma condição de que quando ele atingir esse \0 o loop e parado
    }

    for(i = contador; i >= 0; i--)
    //faz um loop que começara com a quantidade de caracteres digitados pelo usuario e diminuira 1 de i
    //ate que i seja menor ou igual a 0
    
    //ou seja como temos a quantidade de caracteres que o usuario digitou conseguido pelo loop acima
    //podemos fazer um loop que comece dessa quantidade e vai diminuindo 1
    //assim podemos imprimir a string ao contrario usando o comando abaixo
    {
        printf("%c", strg[i]);
    }

    return 0;
}
