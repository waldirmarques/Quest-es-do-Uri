#include<stdio.h>
int main()
{
    double tempo, velMedia,dis;
    scanf("%lf",&tempo);
    scanf("%lf",&velMedia);
    dis = velMedia*tempo;
    printf("%.3lf\n",dis/12);

}