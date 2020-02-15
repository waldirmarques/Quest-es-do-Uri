#include <iostream>
using namespace std;

int main()
{
    int horaInicio,horaFim,resultado;

    cin >> horaInicio >> horaFim;

    if (horaInicio > horaFim) {
        resultado = (24 - horaInicio) + horaFim;
    }else if (horaInicio == horaFim){
        resultado = 0;
    }else{
        resultado = horaFim - horaInicio;
    }

    cout << "O JOGO DUROU " << resultado << " HORAS(S)" << endl;
    
    
}