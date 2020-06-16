#include "iostream"

using namespace std;

int main(void)
{
    int anio;
    bool valor;

    cout << "\nSe pide ingresar un anio para saber si es bisiesto o no\n\n";
    cout << "Ingresar el anio: ";
    cin >> anio;

    if (anio % 400 == 0){
        valor = true; 
    }else{
        if(anio % 4 == 0 && anio % 100 != 0){
            valor = true;
        }else{
            valor = false;        
        }
    }

    if (valor = true){ 
        cout << "\nSi es un anio bisiesto\n";
    }else{
        cout << "\nNo es un anio bisiesto\n";
    }

    return 0;
}
