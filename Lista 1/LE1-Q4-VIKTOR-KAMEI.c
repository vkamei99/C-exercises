/*
Propósito: Simular um chatissimo sistema de atendimento ao cliente de cartao de credito
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/

#include <stdio.h>

void cartaoecpf ()
{
  double cartao, cpf;
  printf("Digite o numero do seu cartao: \n");
  scanf("%lf", &cartao);
  printf("\nDigite seu CPF: \n");
  scanf("%lf", &cpf);
  printf ("\nCartao: %0.lf\nCPF: %0.lf\n\n",cartao, cpf);
}
//função que pede o numero do cartao e cpf
void opcoes ()
{
  printf("\nDigite  0 caso voce queira encerrar o programa voluntariamente \n");
  printf("Digite  1 caso voce queira fazer uma sugestao \n");
  printf("Digite  2 caso voce queira fazer uma reclamacao \n");
  printf("Digite  3 caso voce queira cancelar \n\n");
}
//função que fala as opções que o cliente tem para escolher
void funcaoescolha ()
{
  int escolha;
  printf("Digite sua escolha: \n");
  scanf("%d", &escolha);
  switch(escolha)
  {
    case 0:
      break;

    case 1:
      char sugestao[100];
      printf("\nConfirme seu cartao e cpf e depois digite sua sugestao\n");
      cartaoecpf();//chama a função que pede o cartao
      printf("Sugestao: ");
      scanf("%s", &sugestao);
      break;

    case 2:
      char reclamacao[100];
      printf("\nConfirme seu cartao e cpf e depois digite sua reclamacao\n");
      cartaoecpf();//chama a função que pede o cartao
      printf("Reclamacao: ");
      scanf("%s", &reclamacao);
      break;

    case 3:
      break;

    default:
      printf("\nEssa opcao nao e valida\n");
      opcoes();//chama a função que mostra as opções
      funcaoescolha();//chama a função que faz as escolhas denovo
      break;
     
  }
}
// função escolha a cada numero que e colocado dentro dessa funçao ela roda um programa diferente
 int main()
 {
  cartaoecpf();//chama a função que pede o cartao
  printf("Bem vindo escolha uma das opcoes abaixo para comecar\n");//imprime as boas vindas
  opcoes ();//chama a função que mostra as opções
  funcaoescolha();//chama a função que faz as escolhas
  return 0;
 }