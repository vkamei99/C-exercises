/*
Propósito: Calcule o somatório a seguir, e imprima os termos e o total. "2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n^2+1)/(n+3)"
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>
#include <math.h>
int main()
{ 
    float n1, i, i2, soma;
    soma = 0;
    printf("Digite um numero:\n");
    scanf("%f", &n1);
    //e criado 4 variaveis todas em float pois sera preciso o uso de decimais
    //n1 e o valor dado pelo usuario para dizer ate onde a função vai
    //i e i2 serao usados na função for
    //soma sera o valor do somatorio pedido

    for (i = 1; i < n1; i++)
    //enquanto i menor que n1 começando de 1 e impresso o valor abaixo e depois somado 1 a i ate que seja quebrado o loop
    {
       printf("%.0f/%.0f + ", (i*i)+1, i+3);
       //imprime para todos os valores de i 2 equações sendo i^2+1 e i+3 respectivamente
    }

    printf("%.0f/%.0f = ", n1*n1+ 1, n1+3);
    //para os termos ficarem com a formatação certa enves de fazer a função for ate <= n1 e feito so ate < e o termo final
    //e impresso aqui junto com o sinal de igual

    for (i2 = 1; i2 <= n1; i2++)
    //faz o mesmo que a função for acima so que com a condição <= para ser calculado a somatoria
    {
        soma = soma + ((i2*i2 +1)/(i2+3));
        //soma e atribuido o valor soma = soma + equação
        //isso e feito para que seja guardado o valor anterior e sempre que loopar denovo um novo valor e somado
        //para isso acontecer foi atribuido primeiro o valor de soma igual a 0 antes de rodar o codigo
    }
    
    printf("%.2f", soma);
    //e impresso o valor da soma de todos os termos com 2 casa decimais
    //usei 2 casas pois o exercicio nao pede por nenhum valor especifico e fica mais simples

    return 0;
}
