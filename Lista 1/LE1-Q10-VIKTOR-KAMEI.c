/*
Propósito: Calcule o número de cédulas de cada tipo (1, 2, 5, 10, 20, 50, 100) necessário para pagar uma dada quantia.
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/

#include <stdio.h>

int main ()
{
    int valor, qnt100, qnt50, qnt20, qnt10, qnt5, qnt2, qnt1;
    printf("Digite um valor:\n");
    scanf("%d", &valor);
    //cria uma variavel valor que sera armazenado qual e o valor a ser pago
    //cria uma variavel para cada celula que sera usada para imprimir a quantidade de cada a ser usada

    printf("Sera necessario de: ");

//o seguinte codigo vai ser o mesmo para os 6 seguintes apenas mudadando os valores entao vou explicar so o primeiro
    
    if (valor >= 100)
    // analisa se o valor e maior ou igual a 100 se sim o seguinte codigo e rodado
    {
        qnt100 = valor / 100;
        //divide o valor dado por 100 para saber quantas notas serao precisas como a variavel e dada por um numero inteiro
        //apenas o numero de notas e guardado
        valor = valor - 100 * qnt100;
        //como ainda temos que saber quantas notas ainda sao necessarias e diminuido 100 vezes o numero de cedulas de 100
        //necessarias do valor inicial
        printf("%d cedulas de 100 ", qnt100);
        //por fim e impresso a quantidade de cedulas de 100 necessarias
    }

//O mesmo codigo e rodado para o valor de todas as notas ate chegar em 1
    if (valor >= 50)
    {
        qnt50 = valor / 50;
        valor = valor - 50 * qnt50;
        printf("%d cedulas de 50 ", qnt50);
    }
    
    if (valor >= 20)
    {
        qnt20 = valor / 20;
        valor = valor - 20 * qnt20;
        printf("%d cedulas de 20 ", qnt20);
    }
    
    if (valor >= 10)
    {
        qnt10 = valor / 10;
        valor = valor - 10 * qnt10;
        printf("%d cedulas de 10 ", qnt10);
    }
   
    if (valor >= 5)
    {
        qnt5 = valor / 5;
        valor = valor - 5 * qnt5;
        printf("%d cedulas de 5 ", qnt5);
    }
   
    if (valor >= 2)
    {
        qnt2 = valor / 2;
        valor = valor - 2 * qnt2;
        printf("%d cedulas de 2 ", qnt2);
    } 
  
    if (valor >= 1)
    {
        qnt1 = valor / 1;
        valor = valor - 1 * qnt1;
        printf("%d moedas de 1 ", qnt1);
    }

    return 0;
}