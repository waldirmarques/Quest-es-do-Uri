#include<stdio.h>
int main()
{
    char nome[100];
    double salario, totalV,vendas;
    int porcen = 15;

    scanf("%s",nome);
    scanf("%lf",&salario);
    scanf("%lf",&totalV);
    vendas = totalV*porcen/100;
    salario+=vendas;
    printf("TOTAL = R$ %.2f\n",salario);


}