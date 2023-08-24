/*
Propósito: Faça um programa que leia dois pontos do teclado
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>
#include <math.h>

struct pontos
{
    int x, y;
};

int main()
{
    printf("Digite 2 pontos: x1,y1 e x2,y2\n");
    
    struct pontos s1;
    struct pontos s2;
    scanf("%d %d %d %d", &s1.x, &s1.y, &s2.x, &s2.y);

    float distancia, dx, dy;
    dx =abs(s1.x - s2.x);
    dy =abs(s1.y - s2.y);
    distancia =sqrt(dx*dx + dy*dy);
    printf("\nA distancia entre esses dois pontos e: %.2f\n\n", distancia);

    int area;
    area = dx * dy;
    printf("A area  do retangulo formado com as retas paralelas aos eixos e: %d\n\n", area);

    if (s1.x>0 && s1.y>0)
    {
        printf("o ponto %d,%d pertence ao primeiro quadrante", s1.x, s1.y);
    } else if (s1.x<0 && s1.y<0)
    {
        printf("o ponto %d,%d pertence ao terceiro quadrante", s1.x, s1.y);
    } else if (s1.x>0 && s1.y<0)
    {
        printf("o ponto %d,%d pertence ao quarto quadrante", s1.x, s1.y);
    } else if (s1.x<0 && s1.y>0)
    {
        printf("o ponto %d,%d pertence ao segundo quadrante", s1.x, s1.y);
    }
    printf(" e ");
    if (s2.x>0 && s2.y>0)
    {
        printf("o ponto %d,%d pertence ao primeiro quadrante", s2.x, s2.y);
    } else if (s2.x<0 && s2.y<0)
    {
        printf("o ponto %d,%d pertence ao terceiro quadrante", s2.x, s2.y);
    } else if (s2.x>0 && s2.y<0)
    {
        printf("o ponto %d,%d pertence ao quarto quadrante", s2.x, s2.y);
    } else if (s2.x<0 && s2.y>0)
    {
        printf("o ponto %d,%d pertence ao segundo quadrante", s2.x, s2.y);
    }
    
    printf("\n\nO simetrico do ponto %d,%d e: %d,%d\n", s1.x, s1.y, -1*s1.x, -1*s1.y);
    printf("O simetrico do ponto %d,%d e: %d,%d\n", s2.x, s2.y, -1*s2.x, -1*s2.y);
    
    return 0;
}
