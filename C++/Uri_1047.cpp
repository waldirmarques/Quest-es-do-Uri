#include <iostream>
using namespace std;

int main()
{
    int horaInicio,minutoInicio,horaFim,minutoFim;
    int resHora, resMinutos;

    cin >> horaInicio >> minutoInicio >> horaFim >> minutoFim;

    if (horaInicio > horaFim) {
        resHora = (24 - horaInicio) + horaFim;
        if (minutoInicio > minutoFim) {
            resMinutos = (60 - minutoInicio) + minutoFim;
        }else if (minutoInicio == minutoFim){
            resMinutos = 0;
        }else{
            resMinutos = minutoFim-minutoInicio;
        }  
        
    }else if (horaInicio == horaFim){
        resHora = 0;
        if (minutoInicio > minutoFim) {
            resMinutos = (60 - minutoInicio) + minutoFim;
        }else if (minutoInicio == minutoFim){
            resMinutos = 0;
        }else{
            resMinutos = minutoFim - minutoInicio;
        }  
    }else{
        resHora = horaFim - horaInicio;
        if (minutoInicio > minutoFim) {
            resMinutos = (60 - minutoInicio) + minutoFim;
        }else if (minutoInicio == minutoFim){
            resMinutos = 0;
        }else{
            resMinutos = minutoFim-minutoInicio;
        }  
    }
    cout << "O JOGO DUROU " << resHora << " HORAS(S)" << " E " << resMinutos << " MINUTO(S)" << endl;    
}