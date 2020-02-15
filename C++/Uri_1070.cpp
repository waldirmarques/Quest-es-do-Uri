#include <iostream>
#define CONDICAO 6
int main()
{
    int entrada;
    int cont = 0; 
    
    std::cin >> entrada;

    while(cont < CONDICAO){
        if (entrada % 2 != 0) {
            std::cout << entrada << std::endl;
            cont++;
        }
        entrada++; 
    }   
}