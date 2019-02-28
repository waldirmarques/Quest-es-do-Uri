#include<stdio.h>
int main()
{
    int distancia;
    double combus, res;

    scanf("%d",&distancia);
    scanf("%lf",&combus);

    res = distancia/combus;
    printf("%.3lf km/l\n",res);

}