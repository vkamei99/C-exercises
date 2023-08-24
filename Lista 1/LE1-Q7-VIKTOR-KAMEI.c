/*
Propósito:Ler um mês (numérico) do teclado e imprima a quantidade de dias deste mês (desconsidere ano bissexto)
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>
#include <math.h>

void funcaomes()// cria a funcao funcaomes 
{
    int mes;// cria a variavel
    printf("Digite um mes do teclado: \n");
    scanf("%d", &mes);//guarda o valor digitado dentro da variavel
    printf("Esse mes tem: ");//e impresso antes do loop
    switch (mes)
    {
    case 1:
        printf("31");
        break;

    case 2:
        printf("28");
        break;

    case 3:
        printf("31");
        break;

    case 4:
        printf("30");
        break;

    case 5:
        printf("31");
        break;
    
    case 6:
        printf("30");
        break;

    case 7:
        printf("31");
        break;

    case 8:
        printf("31");
        break;

    case 9:
        printf("30");
        break;

    case 10:
        printf("31");
        break;

    case 11:
        printf("30");
        break;

    case 12:
        printf("31");
        break;
    // para cada valor digitado de 1 - 12 ele imprime quantos dias tem no mes correspondente
    default:
        printf("\nEsse mes nao existe\n");
        funcaomes();
        break;
    //se nenhum mes for chamado essa linha de codigos rodara e imprimira uma mensagem e chamara a funcaomes denovo 
    }
printf(" dias\n");
}

int main ()
{
    funcaomes();//chama a funcao funcaomes
    return 0;
}