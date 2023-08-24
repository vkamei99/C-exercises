/*
Propósito: Ler três números e imprimir o maior deles
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>

int main(){
  int n1, n2, n3;
  printf("Digite 3 numeros: \n");
  scanf("%d %d %d", &n1, &n2, &n3);

  if (n1>n2 && n1>n3){
  printf("%d", n1);
  //compara o primeiro número com o segundo e com o terceiro se ele for maior que ambos ele é impresso.
  } else if (n2>n3){
  printf("%d",n2);
  //se a condição acima não for cumprida ele compara o segundo número com o terceiro e se ele for maior ele é impresso
  } else {
  printf("%d", n3);
  //se as duas condições acimas não forem cumpridas o terceiro número é impresso
  }
  return 0;
}
