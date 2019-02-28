#include<stdio.h>
int main()
{
    int a,b,c,d,produto;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    produto = (a*b)-(c*d);
    printf("DIFERENCA = %d\n",produto);
    return 0;
}