/*
Propósito: Imprima os divisores naturais de um número n
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/

#include <stdio.h>

int main ()
{
    int n1, i;
    printf("Entre um numero:\n");
    scanf("%d", &n1);
    printf("\nPara n=%d: ", n1);
    //cria duas variaveis n1 que sera o valor entrado pelo usuario e i que sera usado na funcao for
    //i sera usado para dividir por n1

    for (i = 1; i <= n1; i++)
    //o valor de i e dado o valor 1 que e aonde começara
    //e dada a condição que enquanto 1 ser menor ou igual a n1 o codigo abaixo continuara em loop
    //e somado 1 para cada vez que o codigo e executado
    {
        if (n1 % i == 0)
        //cria uma condição que diz que se o valor de n1 / 1 nao tiver resto 0 sera executado o codigo 
        //ou seja: se i for um divisor natural de n1 o codigo e executado
        {
            printf("%d, ",i);
            //e impresso o valor de i que sera sempre o valor do divisor real de n1
        }
    }
    
    return 0;
}