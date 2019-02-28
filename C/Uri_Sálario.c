#include<stdio.h>
int main()
{
    int numFun,horas;
    float valorHora,salario;
    scanf("%d",&numFun);
    scanf("%d",&horas);
    scanf("%f",&valorHora);
    salario = horas*valorHora;
    printf("NUMBER = %d\n",numFun);
    printf("SALARY = U$ %.2f\n",salario);
    return 0;

}