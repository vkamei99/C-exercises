/*
Propósito: Ler n números e imprimir o maior deles
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>

int main()
{
 int n1, maior;
 maior = 0;
 //E criada duas variaveis n1 e maior e depois maior e assinalado o valor de 0

 while (1)
 //while e dado o valor de 1 para ser repetido ate que seja dado um break no codigo
 {
   printf("Digite um numero: \n");
   scanf("%d", &n1);
   //pede um numero que e guardado dentro do valor de n1
   if (n1 > maior)
    {
      maior = n1;
    }
     //se a condição a seguir e cumprida o valor de maior e dado o valor de n1
     //assim sempre que digitado um numero maior que o anterior ele e guardado dentro da variavel maior 
   if (n1 == 0)
   {
     break;
   }
   //se digitado o valor 0 o loop e quebrado e o codigo acaba
   
   printf("O maior numero digitado foi: %d\n", maior);
   //sempre e digitado o valor maior que como visto no codigo acima e sempre o maior numero digitado
 }

  return 0;
}
