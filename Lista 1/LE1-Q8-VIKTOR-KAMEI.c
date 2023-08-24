/*
Propósito: Converter os valores de temperatura de Celsius para Fahrenheit.
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/

#include <stdio.h>
#include <math.h>

int main ()
{
    float celsius, fahrenheit;//cria as variaveis que sao numeros reais 
    printf("Digite uma temperatura em celsius:\n");
    scanf("%f", &celsius);//guarda o valor dentro da variavel celsius

    fahrenheit = celsius * 1.8; //guarda dentro da variavel a equação seguinte
    fahrenheit = fahrenheit + 32;//guarda dentro da variavel a equação seguinte
    printf("Sua temperatura em fahrenheit e: %.2f", fahrenheit);
    //imprime o valor da variavel com duas casas decimais

    return 0;
}