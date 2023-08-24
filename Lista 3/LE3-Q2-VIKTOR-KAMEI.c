/****************************************************************************
Autoria:Viktor Kamei Mota
Disciplina: Programação I
Modifique o exercício anterior para usar um vetor de struct e pedir ao usuário que digite
o número n de chamadas
****************************************************************************/

#include <stdio.h>
#define TAM 25

struct dados
{
    int CPF;
    int cartao;
    char reclamacao[TAM]; 
    char sugestao[TAM];
};//cria um struct com 4 variaveis

void opcoes()
{
    printf("\nEscolha a opcao E caso voce queira encerrar o programa!\n");
    printf("Escolha a opcao S caso voce queira fazer uma sugestao.\n");
    printf("Escolha a opcao R caso voce queira fazer uma reclamacao.\n");
    printf("Escolha a opcao C caso voce queira cancelar.\n");
}//imprime na tela todas as opções do chatissimo sistema de cartão de credito

void fescolha()
{
    char escolha;
    struct dados s1;
    struct dados s2;
    //cria uma variavel para escolha e chama 2 instancias,s1 e s2, da struct dados
    
    printf("Informe seu numero do cartao seguido do cpf\n");
    printf("Cartao: ");
    scanf("%d", &s1.cartao);
    printf("CPF: ");
    scanf("%d", &s1.CPF);
    //pede e guarda dentro da primeira instancia da struct os dados do cliente 
    
    s1.reclamacao[0]='\0';
    s1.sugestao[0]='\0';
    //define o primeiro termo das string como nada para se nada for dado não ser impresso lixo

    while(escolha != 'E' && escolha !='C')
    //cria um loop infinito ate que seja entrado E ou C
    {
        printf("\nEscolha uma opcao para comecar\n");
        opcoes();
        printf("Digite sua opcao:\n");
        setbuf(stdin,NULL);
        scanf("%c", &escolha);
        setbuf(stdin,NULL);
        //chama a funcao opcoes e depois pede e guarda a apocao dada pelo usuario dentro da variavel escolha

            switch (escolha)
            //faz um switch case para cada opção dada pelo usuario
            {
                case 'E':
                printf("Suas mensagens foram registradas:\n");
                printf("> %s \n", s1.sugestao);
                printf("> %s \n", s1.reclamacao);
                printf("Volte sempre, desde que nao seja pra cancelar o cartao");
                break;
                //o bloco de codigos acima imprime as mensagens dada pelo usuario e sai do switch

            case 'S':
                printf("\nConfirme seu cartao e cpf e depois digite sua sugestao\n");
                printf("Cartao: ");
                scanf("%d", &s2.cartao);
                printf("CPF: ");
                scanf("%d", &s2.CPF);
                //pede e guarda na segunda instancia do struct o os dados do usuario denovo

                if ((s1.cartao == s2.cartao) && (s1.CPF == s2.CPF))
                //compara se os dados digitados anteriormente são iguais aos dados atuais
                {
                    printf("\nOs valores informados estao corretos\n");
                    printf("Digite sua sugestao:\n");
                    setbuf(stdin,NULL);
                    fgets(s1.sugestao, TAM+2, stdin);
                    setbuf(stdin,NULL);
                    //se os dados batem e pedido a sugestão que e guardada dentro de uma instancia da struct

                }
                else
                {
                    printf("\nOs valores informados estao incorretos\n");
                    //se os dados não batem isso e impresso na tela
                }
                break;

            case 'R':
            //o caso R faz a mesma coisa que o S trocando a sugestao pela reclamaçao
                printf("\nConfirme seu cartao e seu CPF novamente:\n");
                printf("Cartao: ");
                scanf("%d", &s2.cartao);
                printf("CPF: ");
                scanf("%d", &s2.CPF);

                if ((s1.cartao == s2.cartao) && (s1.CPF == s2.CPF))
                {
                    printf("\nOs valores informados estao corretos\n");
                    printf("Digite sua reclamacao de no maximo 25 caracteres:\n");
                    setbuf(stdin,NULL);
                    fgets(s1.reclamacao, TAM+2, stdin);
                    setbuf(stdin,NULL);
                }
                else
                {
                    printf("\nOs valores informados estao incorretos\n");
                }
                break;

            case 'C':
            //caso c apenas sai do switch
                break;

            default:
            //caso nenhuma opçao e dada o bloco abaixo e roddado 
                printf("\nEssa opcao nao e valida\n");
                break;
        }
    }
}

int main()
{
    int usuarios;
    printf("Digite o numero de usuarios:\n");
    scanf("%d", &usuarios);
    setbuf(stdin,NULL);
    //pede e guarda a quantidade de usuarios que vão usar o sistema chatissimo de cartao de credito
    
    for(int i = 0; i < usuarios; i++)
    //cria um loop que vai repetir o seu codigo a quantidade de vezes que for dado de usuarios
    {
        printf("\nBem vindo ao sistema chatissimo de cartao de credito.\n");
        fescolha();
        //chama a função fescolha em todo o loop
    }
    return 0;
}



