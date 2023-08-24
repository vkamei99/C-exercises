/*
Propósito: 
Aluno: Viktor Kamei Mota
Disciplina: Programação I
*/
#include <stdio.h>

struct data
{
    int dia, mes;
};

void meses(int mes)
{
        switch (mes)
        {
         case 1:
             printf("31");
             break;

         case 2:
             printf("28");
             break;

         case 3:
             printf("31");
             break;

         case 4:
             printf("30");
             break;

         case 5:
             printf("31");
              break;
    
         case 6:
             printf("30");
             break;

         case 7:
             printf("31");
             break;

         case 8:
             printf("31");
             break;

         case 9:
             printf("30");
             break;

         case 10:
             printf("31");
             break;

         case 11:
              printf("30");
               break;

          case 12:
              printf("31");
             break;
        
        default:
                break;
    }
}
int main()
{
    struct data s1;
    struct data s2;
    printf("Digite 2 datas na formatacao dia mes\n");
    scanf("%d %d %d %d", &s1.dia, &s1.mes, &s2.dia, &s2.mes);

    if (s1.mes > s2.mes)
    {
        for (s2.mes = s2.mes; s2.mes <= s1.mes; s2.mes++)
        {
            if (s2.mes == 13)
             {
                 break;
             }
             printf("A data %d/%d tem: ", s2.dia, s2.mes);
             meses(s2.mes);
             printf(" dias no mes\n");
        }

        if (s1.dia > s2.dia)
        {
            for (s2.dia = s2.dia; s2.dia <= s1.dia; s2.dia++)
            {
             if (s2.mes == 13)
             {
                 break;
             }
             printf("A data %d/%d tem: ", s2.dia, s2.mes);
             meses(s2.mes);
             printf(" dias no mes\n");
            }
        }
        
        
    }else if (s2.mes > s1.mes)
    {
        for (s1.mes = s1.mes; s1.mes <= s2.mes; s1.mes++)
        {
            if (s1.mes == 13)
             {
                 break;
             }
             printf("A data %d/%d tem: ", s1.mes, s1.mes);
             meses(s2.mes);
             printf(" dias no mes\n");
        }
        if (s2.dia > s1.dia)
        {
            for (s1.dia = s1.dia; s1.dia <= s2.dia; s1.dia++)
            {
            if (s1.mes == 13)
            {
                break;
            }
             printf("A data %d/%d tem: ", s1.dia, s1.mes);
             meses(s2.mes);
             printf(" dias no mes\n");
            }
        }
        
    }
    return 0;
}