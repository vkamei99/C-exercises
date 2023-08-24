/*
Propósito:Imprima uma tabela de conversão de graus Celsius para Fahrenheit, dados o início, o fim e o intervalo.
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/

#include <stdio.h>

int main ()
{
    float celsius, intervalo, inicio, fim;
    printf("Digite aonde quer comecar, aonde quer terminar e o intervalo:\n");
    scanf("%f %f %f", &inicio, &fim, &intervalo);
    printf("\nInicio: %.2f\nFim: %.2f\nIntervalo: %.2f\n\n", inicio, fim, intervalo);
    //cria 5 variaveis todas em float pois sera necessario o uso de decimais
    //a variavel inicio sera onde começara a tabela e a fim sera onde terminara
    //a intervalo sera o quanto sera somado a variavel inicio ate seu valor igualar a variavel fim
    
    for (celsius = inicio; celsius<=fim; celsius = celsius + intervalo)
    //transforma a variavel celsius em o valor dado para ser o inicio da tabela
    //soma celsius ao valor dado para ser o intervalo ate que a condição que celsius seja menor ou igual ao valor dado
    //para ser o fim da tabela
    {
        printf("%.2fC = %.2fF\n",celsius, celsius * 1.8 + 32);
        //imprime o valor inicial de celsius e depois é feita a equação para transformar celsius em fahrenheit
        //esses valores sao impressos com 2 casas decimais
    }
    
    return 0;
}