#include<stdio.h>
int main()
{
    int lista[7] = {100,50,20,10,5,2,1};
    int quantidade[7] = {0,0,0,0,0,0,0};
    int ent,res, i;
    int resres;
    scanf("%d",&ent);
    resres = ent;
    for(i = 0; i<7;i++){
        res = ent/lista[i];
        quantidade[i] = res;
        ent = ent%lista[i];
    }
    printf("%d\n",resres);
    for(i = 0;i<7;i++){
        printf("%d nota(s) de R$ %d,00\n",quantidade[i],lista[i]);
    }
}