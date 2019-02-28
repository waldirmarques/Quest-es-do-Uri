#include<stdio.h>

int main()
{
    int cod, quant;
    scanf("%d %d",&cod, &quant);
    double lista[] = {4.00,4.50,5.00,2.00,1.50};
    printf("Total: R$ %.2f\n",lista[cod-1]*quant);
}