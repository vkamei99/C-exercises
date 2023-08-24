/*
Propósito: Ler um número inteiro do teclado e diga se é par ou ímpar, se é positivo, negativo ou
nulo, e se o seu módulo é maior, menor ou igual a 10.
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n1, resto;
  printf("Digite um numero:\n");
  scanf("%d", &n1);
  printf("%d: Este numero eh ",n1);
   /* cria tres variaveis a primeira armezanará o numero digitado e a segunda servirá pra dizer se o numero é par ou impar,
   depois ele le um numero e o guarda dentro da variavel n1*/
  resto = n1%2;
  if (resto == 0){
    printf("par, ");
  } else{
    printf("impar, ");
  }
   /* Armazena dentro da variavel "resto" o resto da divisão dela por 2, depois analisa para ver se esse resto e igual a 0 se sim
   significa que ela é par e isso e impresso, se qualquer outro valor estiver dentro da variavel ele imprime impar.*/
  if (n1>0){
    printf("positivo ");
  } else if (n1 == 0){
    printf("nulo ");
  } else {
    printf("negativo ");
  }
   /* Analisa se a variavel n1 e maior ou igual a zero e pra cada comando é impresso positivo ou nulo respectivamente, 
   se qualquer uma das condições acima não for comprida isso quer dizer que a variavel e negativa é e impresso negativo*/
  if (abs(n1)>10){
    printf("e tem modulo maior que 10");
  } else if (abs(n1) == 10){
    printf("e tem modulo igual a 10");
  } else {
    printf("e tem modulo menor que 10");
  }
   /* Analisa se a variavel n1 tem o módulo maior que 10, se sim isso é impresso, se não e analisado se ela tem o modulo igual
   a 10, se sim isso é impresso, se não e impresso que ela tem modulo menor que 10. */
  return 0;
}
