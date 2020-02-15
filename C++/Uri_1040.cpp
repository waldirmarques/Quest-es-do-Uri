#include <iostream>
#define P1 2
#define P2 3
#define P3 4
#define P4 1

int main()
{
    float a,b,c,d;
    float notaExame;
    float media;

    std::cout.precision(1);
    std::cin.precision(1);

    std::cin >> a >> b >> c >> d;

    media = (a*P1 + b*P2 + c*P3 + d*P4)/(P1+P2+P3+P4);

    std::cout << "Media: "<< media << std::endl;
    
    if (media >= 5 && media < 7) {
        std::cout << "Aluno em exame:" << std::endl;
        std::cin >> notaExame;
        std::cout << "Nota do exame: " << notaExame << std::endl;
        media = (media + notaExame) / 2;
        if (media >= 5) {
            std::cout << "Aluno aprovado." << std::endl;
        }else{
            std::cout << "Aluno reprovado." << std::endl;
        }
        std::cout << "Media final: " << media << std::endl;
        
    }else if(media >= 7.0){
        std::cout << "Aluno aprovado." << std::endl;
    }else{ 
        std::cout << "Aluno reprovado." << std::endl;
    }
}
