#include <stdio.h>

struct cartaoecpf
{
    float cartao, cpf;
    //cria uma struct com 2 variaveis cpf e cartao
    //essa struct sera usada para confirmar os valores
};

void opcoes();
//declara uma função "opções"
void funcaoescolha();
//declara uma função "funcaoescolha"

int main()
{
    printf("Bem vindo ao sistema chatissimo de cartao de credito.\n");
    //imprime boas vindas ao cliente
    funcaoescolha();
    //chama a funcao "funcao escolha"
    return 0;
}

void opcoes ()
//define a função "opções" como o bloco de codigos a seguir:
{
    printf("\nDigite  0 caso voce queira encerrar o programa voluntariamente \n");
    printf("Digite  1 caso voce queira fazer uma sugestao \n");
    printf("Digite  2 caso voce queira fazer uma reclamacao \n");
    printf("Digite  3 caso voce queira cancelar \n\n");
    //imprime na tela as diversas opções do chatissimo sistema de cartao de credito
}

void funcaoescolha ()
{
    int escolha;
    //cria a variavel escolha
    
    struct cartaoecpf s1;
    struct cartaoecpf s2;
    //declara 2 structs que contem 2 variaveis a de cartao e de cpf 
    
    printf("Informe seu numero do cartao seguido do cpf\n");
    printf("Cartao: ");
    scanf("%d", &s1.cartao);
    printf("Cpf: ");
    scanf("%d", &s1.cpf);
    //pede e guarda o numero de cartao e cpf em uma variavel criada pelo struct

    printf("\nEscolha uma opcao para comecar\n");
    opcoes();
    printf("Digite sua opcao:\n");
    scanf("%d", &escolha);
    //chama a função opções
    //depois pede e guarda o valor escolhido dentro da variavel escolha

    switch (escolha)
    //esse comando pega a variavel "escolha" e para cada valor ele faz o bloco de codigo definido
    {
    case 0:
    //exemplo se escolha = 0 o codigo abaixo e rodado
        printf("\nVolte sempre, desde que nao seja pra cancelar o cartao");
        //imprime na tela o texto
        break;
        //sai do switch e para a execução do codigo

    case 1:
        printf("\nConfirme seu cartao e cpf e depois digite sua sugestao\n");
        printf("Cartao: ");
        scanf("%d", &s2.cartao);
        printf("CPF: ");
        scanf("%d", &s2.cpf);
        //pede e guarda o numero de cartao e cpf em outra variavel criada pelo struct
      
        if (s1.cartao == s2.cartao && s1.cpf == s2.cpf)
        //compara se os valores dados em cada vez que e pedido o cartao e cpf são iguais
        {
            printf("\nOs valores informados estao corretos\n");
            //se os valores são iguais e impresso na tela
        } else
        //se os valores não forem iguais o codigo abaixo e rodado
        {
            printf("\nOs valores informados estao incorretos\n");
            opcoes();
            funcaoescolha();
            //chama a funcao "opções" denovo
            //chama a função "funcaoescolha" denovo
        }
        break;
        //sai do switch

    case 2:
        printf("\nConfirme seu cartao e cpf e depois digite sua reclamacao\n");
        printf("Cartao: ");
        scanf("%d", &s2.cartao);
        printf("CPF: ");
        scanf("%d", &s2.cpf);
      
        if (s1.cartao == s2.cartao && s1.cpf == s2.cpf)
        {
            printf("\nOs valores informados estao corretos\n");
        } 
        else
        {
            printf("\nOs valores informados estao incorretos\n");
            opcoes();
            funcaoescolha();
        }
        break;
        //faz exatamente a mesma coisa que o case 1 so q trocando sugestao por reclamacao

    case 3:
      break;
      //sai do switch e para com o codigo

    default:
    //caso nenhum dos 4 numeros acima tenha sido acionado o bloco abaixo e rodado
      printf("\nEssa opcao nao e valida\n");
      opcoes();
      funcaoescolha();
      //chama a função "opções" e depois a "funcaoescolha" denovo;
      break;
     
  }
}