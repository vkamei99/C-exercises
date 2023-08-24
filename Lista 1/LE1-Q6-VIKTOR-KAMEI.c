/*
Propósito: Calcular e imprimir a tabuada sem repetir multiplicações
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>
#include <math.h>

int main ()
{ 
    int n1, multiplicador;//cria 2 variaveis n1 e multiplicador
    printf("Digite um numero:\n");
    scanf("%i", &n1);//armazena o valor digitado dentro de n1
    

    for(multiplicador = 1; multiplicador<=n1; ++multiplicador)
    //multiplicador e dado o valor de 1;
    //e dado entao a condição em que o codigo rodara em loop ate ela for quebrada;
    //e executado toda hora depois que o codigo e executado
    {
        printf("%dx%d = %d\n", multiplicador, n1, multiplicador * n1);//codigo a ser executado em loop
    }
    
    return 0;
}