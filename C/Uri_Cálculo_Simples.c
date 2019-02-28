#include<stdio.h>
int main()
{
    int cod, peca,cod1,peca1;
    double valor,valor1, preco;
    
    scanf("%d %d %lf",&cod,&peca,&valor);
    scanf("%d %d %lf",&cod1,&peca1,&valor1);
    preco = peca*valor;
    preco += peca1*valor1;
    printf("VALOR A PAGAR: R$ %.2f\n",preco);

}