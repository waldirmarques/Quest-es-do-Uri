#include <iostream>
using namespace std;

int main()
{
    double salario[3] = {2000,3000,4500};
    double porcen[3] = {8,18,28};
    double salarioFun, imposto;
    

    cin >> salarioFun;

    if (salarioFun <= salario[0]) {  
        cout << "Isento" << endl;
    
    }else{
        salarioFun = salarioFun - salario[0];        //Tira a faixa de valor que é isenta de impostos.
        // Encontrar uma maneira de aplicar o modolo em numeros de pontos flutuantes,
        // pegando do maior valor,ou seja, 4500 até o 2000. Em cada modulo, diminuir o resultado valor total,
        // e somar a porcentagem de acordo com os modulos.
        cout << "R$ " << salarioFun << endl;
    }
}