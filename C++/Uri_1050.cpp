#include <iostream>
#include <string>
using namespace std;

int main()
{
    string cidade[8] = {"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
    int DDD[8] = {61,71,11,21,32,29,27,31};

    int numero;

    cin >> numero;

    for(int i = 0, j = 0; i < sizeof(DDD); i++,j++){
        if (numero == DDD[i]) {
            cout << cidade[j] << endl;
            break;
        } 
    }
}