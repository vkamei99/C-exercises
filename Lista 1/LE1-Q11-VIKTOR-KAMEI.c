/*
Propósito: Calcule e retorne o n-ésimo termo de uma PA (progressão aritmética), sendo fornecidos como entrada o número de termos, o primeiro termo e a razão.
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/

#include <stdio.h>

int main ()
{
    int an, a1, n, r, pa;
    printf("Digite o Primeiro termo a Razao e o Numero de termos de uma PA:\n");
    scanf("%d %d %d", &a1, &r, &n);
    printf("\nPrimeiro termo: %d, Razao: %d, Numero de termos: %d\n\n", a1, r, n);
    printf("PA = ");
    //e criada as variaveis: 
    //an que sera o enesimo termo da PA 
    //a1 que sera o primeiro
    //n que sera o numero de termos
    //r que sera a razao da PA
    //e a variavel pa que sera usada depois no comando for

    an = a1 + (n - 1) * r;
    //aqui e calculado o enisimo termo da pa com os valores dados 
    //isso sera usado para o que nao seja ultrapassdo o valor dado que o numero de termos tem que ser exato

    for (pa = a1; pa <= an; pa = pa + r)
    //transforma a variavel pa em o valor dado para ser o primeiro termo
    //enquanto a pa que começa com an nao ultrapassar o valor do enesimo termo o codigo abaixo e executado
    //soma pa ao valor dado para ser a razao da pa (r) cada vez que o codigo e executado
    {
        printf("%d, ", pa);
        //imprime o valor da pa em loop
    }
    
    return 0;
}