#include<stdio.h>
int main()
{
    int entrada,hora,minuto,segundo;
    scanf("%d",&entrada);
    hora = entrada / 3600;
    entrada = entrada % 3600;
    minuto = entrada / 60;
    entrada = entrada % 60;
    segundo = entrada;
    printf("%d:%d:%d\n",hora,minuto,segundo);

}