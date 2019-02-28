#include<stdio.h>
int main()
{
    int entrada,ano,mes,dia;
    scanf("%d",&entrada);
    ano = entrada / 365;
    entrada = entrada % 365;
    mes = entrada / 30;
    entrada = entrada % 30;
    dia = entrada;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",ano,mes,dia);
}

   