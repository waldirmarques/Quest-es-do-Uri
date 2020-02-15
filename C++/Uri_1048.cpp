#include <iostream>
using namespace std;

int main()
{
    double salario[5] = {0,400,800,1200,2000};
    double porcen[5] = {15,12,10,7,4};
    double salarioFun, porcenFun,porcentagem;

    cin >> salarioFun;

    if (salarioFun >= salario[0] && salarioFun <= salario[1]) {  //0 - 400 = 15
        porcenFun = (salarioFun*porcen[0]/100);
        salarioFun = salarioFun + porcenFun;
        porcentagem = porcen[0];
    }else if (salarioFun > salario[1] && salarioFun <= salario[2]){  //400 - 800 = 12
        porcenFun = (salarioFun*porcen[1]/100);
        salarioFun = salarioFun + porcenFun;
        porcentagem = porcen[1];
    }else if (salarioFun > salario[2] && salarioFun <= salario[3]){    //800 - 1200 = 10
        porcenFun = (salarioFun*porcen[2]/100);
        salarioFun = salarioFun + porcenFun;
        porcentagem = porcen[2];
    }else if (salarioFun > salario[3] && salarioFun <= salario[4]){     // 1200 - 2000 = 7
        porcenFun = (salarioFun*porcen[3]/100);
        salarioFun = salarioFun + porcenFun;
        porcentagem = porcen[3];
    }else if (salarioFun > salario[4]){         // > 2000 = 4
        porcenFun = (salarioFun*porcen[4]/100);
        salarioFun = salarioFun + porcenFun;
        porcentagem = porcen[4];
    }
    cout.precision(5);
    cout << "Novo salario: " << salarioFun << endl;
    cout << "Reajuste ganho: " << porcenFun << endl;
    cout << "Em percentual: " << porcentagem << " %" << endl;  
}