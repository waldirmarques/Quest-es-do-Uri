#include<stdio.h>
#include<math.h>
int main()
{
    double lista[6] = {100, 50, 20, 10, 5, 2};
    double listaM[6] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};
    double quantidade[6] = {0, 0, 0, 0, 0, 0};
    double quantidadeM[6] = {0, 0, 0, 0, 0, 0};
    int res, i;
    double ent;
    scanf("%le",&ent);
    ent+=0.001;

    for(i = 0; i<6;i++){
        res = ent/lista[i];
        quantidade[i] = res;
        ent = fmod(ent,lista[i]);
    }
    printf("NOTAS:\n");
    for(i = 0;i<6;i++){
        printf("%.0f nota(s) de R$ %.2f\n",quantidade[i],lista[i]);
    }
    for(i = 0; i<6;i++){
        res = ent/listaM[i];
        quantidadeM[i] = res;
        ent = fmod(ent,listaM[i]);
    }

    printf("MOEDAS:\n");
    for(i = 0;i<6;i++){
        printf("%.0f moeda(s) de R$ %.2f\n",quantidadeM[i],listaM[i]);
    }
}