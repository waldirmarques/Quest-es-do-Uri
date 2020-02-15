#include <iostream>
using namespace std;

int main()
{
    float vetor[4];
    int tmp,j;
    
    cin >> vetor[0] >> vetor[1] >> vetor[2];
    
    for(int i = 1; i <= 3; i++){
        j = i;
        while(j > 0 && vetor[j-1] > vetor[j]){
            tmp = vetor[j];
            vetor[j] = vetor[j-1];
            vetor[j-1] = tmp;
            j--;
        }
    }

    if (vetor[3] >= vetor[1] + vetor[2]) {
        cout << "NAO FORMA TRIANGULO" << endl;
    }else if ((vetor[3]*vetor[3]) == (vetor[1]*vetor[1])+(vetor[2]*vetor[2])){
        cout << "TRIANGULO RETANGULO" << endl;
    }else if ((vetor[3]*vetor[3]) > (vetor[1]*vetor[1])+(vetor[2]*vetor[2])){
        cout << "TRIANGULO OBTUSANGULO" << endl;
    }else if ((vetor[3]*vetor[3]) < (vetor[1]*vetor[1])+(vetor[2]*vetor[2])){
        cout << "TRIANGULO ACUTANGULO" << endl;
    }

    int cont = 0; //Contador que guarda o número de vezes que um valor existe dentro do arrey

    for(int i = 1; i <= 3; i++){
        if (vetor[i] == vetor[i+1]) {
            cont++;
        }       
    }

    if (cont == 2 ) {
        cout << "TRIANGULO EQUILATERO" << endl;
    }else if (cont == 1){
        cout << "TRIANGULO ISOSCELES" << endl;
    }
}