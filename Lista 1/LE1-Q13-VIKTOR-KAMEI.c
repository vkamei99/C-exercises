/*
Propósito: Imprima os divisores naturais dos números de 1 a n:
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>

int main()
{
    int n1, i, i2;
    printf("Digite um numero:\n");
    scanf("%d", &n1);
    //e criada tres variaveis em que n1 e o valor dado pelo usuario
    //i e i2 serao usados na funcao for

    for (i = 1; i <= n1; i++)
    //enquanto i que começa no 1 for menor ou igual a n1 o codigo e executado e depois e somado 1 a i
    {
        printf("\n");
        //da um espaço de linha que e usado apenas para formatação

        for (i2 = 1; i2 <= i; i2++)
        //enquanto i2 que começa em 1 e menor ou igual a i o codigo abaixo e executado e depois somado 1 a i2
        {
            if(i % i2 == 0)
            //verifica se a i2 e um divisor natural de i se sim i2 e impresso
            {
                printf("%d ", i2);
            }
        }
    }
    //e usado uma função for dentro da outra a primeira e usada apenas para conseguir os numeros que serao divididos
    //e a segunda para saber os divisores reais 
    //como a segunda esta em loop dentro da primeira sempre que a primeira e rodada a segunda tambem e assim conseguindo todos
    //os divisores reais ate o valor pedido

    return 0;
}
