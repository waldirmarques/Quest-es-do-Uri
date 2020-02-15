#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    float perimeto, area;

    cin >> a >> b >> c;

    if(a > b && a > c){
        if ((b+c) > a) {
            perimeto = a+b+c;
            cout << "Perimetro = " << perimeto << endl;
        }else{
            area = ((a+b) * c) / 2;
            cout << "Area = " << area << endl;
        } 
    }else if (b > a && b > c){
        if ((a+c) > b) {
            perimeto = a+b+c;
            cout << "Perimetro = " << perimeto << endl;
        }else{
            area = ((a+b) * c) / 2;
            cout << "Area = " << area << endl;
        }     
    }else if (c > a && c > b){
        if ((a+b) > c) {
            perimeto = a+b+c;
            cout << "Perimetro = " << perimeto << endl;
        }else{
            area = ((a+b) * c) / 2;
            cout << "Area = " << area << endl;
        }   
    }    
}