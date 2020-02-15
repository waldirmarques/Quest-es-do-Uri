#include <iostream>

int main()
{
    int vetor[6];
    int vetor2[6];
    int j, tmp;
    int a, b, c;

    std::cin >> vetor[0] >> vetor[1] >> vetor[2];
    
    for(int i = 0; i <= 3; i++){
        vetor2[i] = vetor[i];
    }

    for(int i = 1; i <= 3; i++){
        j = i;       
        while(j > 0 && vetor[j-1] > vetor[j]){
            tmp = vetor[j];
            vetor[j] = vetor[j-1];
            vetor[j-1] = tmp;
            j--;
        }        
    }
   
    for(int i = 0; i < 3; i++){
        std::cout << vetor[i] << std::endl;
    }

    std::cout << std::endl;

    for(int i = 0; i < 3; i++){
        std::cout << vetor2[i] << std::endl;
    }
     
}